#include <iostream>
using namespace std;
/*
// const tanımına alternatif kod
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
*/

int topla(const int, const int); // const örneği için

int main() {

  
   // Escape karakterler 
   cout << "Merhaba\r Dünya\n\n";
  
/*
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
  
  */

  /*
  // const örneği
  cout<<topla(5,6)<<endl;
  */

   return 0;
}

int topla(const int x, int y){
  int a;
  // x=5; hata
  a=x+y;
  return a;
}

/*
Sabitler (literal) programda sabit değer tutan yapılardır. Herhangi bir temel veri tipinde ya da string türünde olabilirler.

Tam Sayı Sabitleri
	212     // Legal
	215u    // Legal, 
	0xFeeL  // Legal,
	078     // Illegal: 8 octal rakam değil
	056		// Legal
	032UU   // Illegal: cannot repeat a suffix
	
başında bulunan simgelere göre anlamlar
	0x, 0X 		(hexadecimal)
	0 			(octal)
	boş ise 	(decimal)
	
sonda bulunan simgelere göre anlamlar (büyük küçük harf ayrımı yok)	
	U(unsigned), 
	L(long)	
	UL (unsigned long)

örnek sabitler (literal)
	85         // decimal
	0213       // octal
	0x4b       // hexadecimal
	30         // int
	30u        // unsigned int
	30l        // long
	30ul       // unsigned long
	
Kayan Noktalı Sabitler (Reel Sabitler)
	kayan noktalı bir değerde 
		- tam sayı
		- ondalık sayı
		- kesirli kısım
		- üstel kısım bulunmaktadır
	kayan noktalı sayılar ondalıklı ya da üstel biçimde gösterilebilirler
	
	3.14159       // Legal
	314159E-5L    // Legal  314159 * 10^-5
	510E          // Illegal: E sonrası boş
	210f          // Illegal: ondalık veya üs yok, 
	.e55          // Illegal: e öncesi boş

	3.14159L   // long double
	6.02e23f   // float, f konmazsa double literal olur

Boolean Sabitler
	true, false

Karakter Sabitler
	'A', 'x' gibi tek tırnakla gösterilirler
	3 türdedirler
		1. düz karakter: tek tırnakla gösterilen ('x', 'A')
		2. excape karakter: özel anlamı olan, \ ile başlar
		3. universal karakter ('\u02C0')
		
	Escape Karakterler
		\\	\ character
		\'	' character
		\"	" character
		\?	? character
		\a	Alert or bell
		\b	Backspace
		\f	Form feed
		\n	Newline
		\r	Carriage return
		\t	Horizontal tab
		\v	Vertical tab
		
String Sabitler
	çift tırnakla işaretlenirler
	"merhaba dünya"

	"merhaba \


	dünya"

Sabit Tanımlamak
		1. #define: 
			önişlemci komutudur
			iyi programlama için sabitleri büyük harflerle tanımlamak daha iyidir.
			
		2. const
			. herhangi bir değişkenin başına yazılarak değişken sabit yapılabilir.
			. program boyunca içeriği değiştirilmeyecek değişkenler için kullanılır
			. fonksiyonların geri dönüş ve parametre değişkenlerinin değiştirilmeye karşı korunması için bu şekilde tanımlanması yararlıdır
			. readonly anlamı katar
*/
