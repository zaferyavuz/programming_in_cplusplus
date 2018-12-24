#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

#define ALPHABET_UNICODE_VALUES 65, 66, 67, 199, 68, 69, 70, 71, 414, 72, 73, 432, 74, 75, 76, 77, 78, 79, 214, 80, 82, 83, 478, 84, 85, 220, 86, 89, 90
#define LINE_COUNT_BUFFER_SIZE 200
#define LINE_LENGTH_BUFFER_SIZE 50

struct utf8_char getUTF8Char(char *address);
bool compare(char *a, char *b);

struct utf8_char
{
    int value = 0;
    u_int8_t length = 0; 
    u_int8_t bytes[6];
};

int alphabet_map[29] = {ALPHABET_UNICODE_VALUES};
// bu unicode kodlarını tarayarak alfabede elimizdeki kodun yerini bulacağız
// düzgün bir map fonksiyonu tercih edilebilir

int main()
{
    char **lines = new char*[LINE_COUNT_BUFFER_SIZE];
    for(int i = 0; i < LINE_COUNT_BUFFER_SIZE; ++i)
    {
        lines[i] = new char[LINE_LENGTH_BUFFER_SIZE];
    }
    // satırlar için yer alıyoruz

    ifstream iFile;
    iFile.open("input.txt");
    int length = 0;
    while(!iFile.eof())
    {
        iFile.getline(lines[length++], LINE_LENGTH_BUFFER_SIZE);
    }
    iFile.close();
    // satırları aldık

    sort(lines, lines + length, compare);
    // diziyi compare fonksiyonundan dönen değer yardımıyla sıraladık
    // compare fonksiyonuna bakınız

    ofstream oFile;
    oFile.open("output.txt");
    for(int i = 0; i < length; ++i)
    {
        oFile << lines[i] << endl;
    }
    oFile.close();
    // sıralanmış satırları farklı bir dosyaya yazdık

    for(int i = 0; i < LINE_COUNT_BUFFER_SIZE; ++i)
    {
        delete lines[i];
    }
    delete lines;
    // temizlik

    return 0;
}
bool compare(char *a, char *b)
{
    struct utf8_char letterA = getUTF8Char(a);
    struct utf8_char letterB = getUTF8Char(b);
    // a ve b adreslerindeki ilk harfleri aldık

    for(int i = 0; i < 29; ++i)
    {
        if(letterB.value  == letterA.value)
        {
            return compare(a + letterA.length, b + letterB.length);
            // eğer bu iki harf birbirine eşitse bir sonraki unicode harfinin
            // bulunduğu adresleri karşılaştırıp onun sonucunu döndürüyoruz.
            // eğer iki cümle birbirine tamamen eşitse hata olabilir!
        }
        if(alphabet_map[i] == letterA.value)
        {
            return true;
            // alfabede önce a geliyorsa true döndür
        }
        if(alphabet_map[i] == letterB.value)
        {
            return false;
            // önce b gelirse false döndür
        }
    }
    return false;
}
struct utf8_char getUTF8Char(char *address)
{
    struct utf8_char result;
    // sonuç struct'ımız.
    
    while(address[0] & (128 >> result.length))
    {
        result.length++;
        // unicode karakterimizin kullandığı byte sayısını ilk byte'a bakarak anlıyoruz
    }
    if(result.length == 0)
    {
        result.length = 1;
        // özel koşul, burayı ve yukarıyı birleşik - daha kısa şekilde yazamadım
    }
    for(int i = 0; i < result.length; ++i)
    {
        result.bytes[i] = address[i];
        // karakter struct'ımızın byte'larını dolduruyoruz
    }
    if(result.length == 1)
    {
        result.value = address[0];
        // uzunluk 1 ise value doğrudan ilk ve tek byte'ın değeri.
    }
    else
    {
        for(int i = 1; i < result.length; ++i)
        {
            result.value = result.value | ((int)result.bytes[result.length - i]) << (6 * (i - 1));
        }
        result.value = result.value | ((int)result.bytes[0] & ((1 << (7 - result.length)) - 1)) << ((result.length - 1) * 6);
        // uzunluk birden fazlaysa, ilk byte hariç diğer byteların ilk 6 bitlerini uç uca
        // or'layarak değere yapıştırıyoruz. en son, en sola ise ilk byte'ın değer taşıyan kısmını yapıştırıyoruz.
    }
    
    return result;
}
