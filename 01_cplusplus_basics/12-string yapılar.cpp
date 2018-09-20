#include <iostream>
#include <cstring>
#include <string>
using namespace std;
/*
  	C++ dilinde 2 türlü string tanımlanabiliyor
		1. karakter dizisi şeklinde
		2. "string" class türü şeklinde
		
	1. karakter dizisi
		. c++ daki dizi yapısının çok benzeridir.
		. 2 önemli farkı vardır. 1) sonunda otomatik olarak NULL karakteri bulunur. 2) bu sayede dizi ismi ile tüm karaterlere erişilebilir.
			char isim[6] = {'Z', 'a', 'f', 'e', 'r', '\0'}; // ya da
			char isim[] = "Zafer";

*/
//-------------------------------------------------------------
int main() {

// karakter dizisi şeklinde string
			char isim[6] = {'Z', 'a', 'f', 'e', 'r', '\0'}; // ya da
			char isim2[] = "Zafer";
      cout<<"Merhaba "<<isim<<endl;
       
//-------------------------------------------------------------      
/*
	C++ dilinde 2 türlü string tanımlanabiliyor
		1. karakter dizisi şeklinde
		2. "string" class türü şeklinde
		
	1. karakter dizisi
		. c++ daki dizi yapısının çok benzeridir.
		. 2 önemli farkı vardır. 1) sonunda otomatik olarak NULL karakteri bulunur. 2) bu sayede dizi ismi ile tüm karaterlere erişilebilir.
			char isim[6] = {'Z', 'a', 'f', 'e', 'r', '\0'}; // ya da
			char isim[] = "Zafer";

  #include <cstring> kütüphanesini dahil etmek gerekir

	strcat(s1,s2);		// s2 stringini s1 in sonuna ekler s1 de tüm sonuç olur
	strlen(s1);			// s1 stringindeki karakter sayısını geri döndürür
	strcmp(s1,s2);		// s1 ile s2 stringini karşılaştırır, eşitse 0, s1<s2 ise negatif, s1>s2 ise pozitif değer döndürür
	strchr(s1,ch);		// s1 stringinde ch karakteri kaçıncı karakterden başlıyor
	strstr(s1,s2);		// s1 stringinde s2 stringi kaçıncı karakterden başlar
	// yukarıdaki fonksiyonlar ile aynı işlevi gören kendi fonksiyonlarınızı yazınız
	// stringi tersine çevirin
	// bir strinf polindrom mu diye kontrol edin
	// verilen bir sözlükten polindrom kelimeleri bulun (serbest ödev için eşik ödevi olabilir)
*/
/*
   char str1[10] = "Merhaba";
   char str2[10] = "Dünya";
   char str3[20];
   int  uz ;

   // kopyalama
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // birleştirme
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // uzunluk bulma
   uz = strlen(str1);
   cout << "strlen(str1) : " << uz << endl;
  */
//----------------------------------------------------------
// string yapısı
// #include <string> gerekli

/*
   string str1 = "Merhaba";
   string str2 = "Dünya";
   string str3;
   int  uz ;

   // kopyalama
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // birleştirme
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // uzunluk bulma
   uz = str3.size();
   cout << "str3.size() :  " << uz << endl;
*/

//--------------------------------------------------------------
/*
    string s = "bilgisayar"; 
  
    int n = s.length();  
      
    // karakter dizisi tanımlama, sonundaki null karakterinden dolayı n+1 boyutlu 
    char char_dizisi[n+1];  
      
    // s.c_str() ile s stringi karakter dizisine döndürülüyor
    strcpy(char_dizisi, s.c_str());  
      
    for (int i=0; i<n; i++) 
      cout << char_dizisi[i]; 

    // sondaki NULL dan dolayı dizinin adı ile tüm elemanlarına erişiliyor  
    cout<<endl<<char_dizisi<<endl;
*/
//-------------------------------------------------------------
  return 0;
}
