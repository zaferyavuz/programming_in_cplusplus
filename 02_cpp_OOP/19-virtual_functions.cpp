/*
	Virtual Functions (Sanal Fonksiyonlar)
		* sanal fonksiyonlar görünüşte var olup gerçekte olmayan fonksiyonlardır.
		* Gerçekte bir gözdesi olmayan fonksiyonlardır
		* miras kavramında, base class'te sanal bir fonksiyon tanımlanır ve derived class'ta bu fonksiyon aşırı yüklenir
		* daha sonra base class türünde bir pointer ile derived class fonksiyonları çağrılır (polimorfizm)
		
		* sanal fonksiyonlar miras durumunda hangi fonksiyonun çağrılacağını garanti eder. pointer neyi gösteriyorsa onun fonksiyonu kullanılır
		* runtime polimorfizm gerçekleştirmek için kullanılır.
			- hangi fonksiyonun çağrılacağı koşma zamanında belli olur. (run-time binding | dynamic binding | late-binding)
			- <hangi fonksiyonun çağrılacağı derleme zamanında belirli ise compile-time binding | static binding | early-binding> <binding=bağlama, birleştirme>
		* virtual anahtar kelimesi ile kullanılır.	
		
	KURALLAR
		* sanal fonksiyonlar puplic alanda tanımlanmalıdırlar
		* sanal fonksiyonlar static ya da friend olamazlar
		* run-time polimorfizm için sanal fonksiyonlar, base class ın pointer ı ile çağrılmalıdırlar.
		* base class ve derived class taki sanal fonksiyonların prototipleri (parametre sayıları, türleri) aynı olmak zorundadır
		* Her zaman temel sınıfta tanımlanırlar ve türetilmiş sınıfta geçersiz kılınırlar. 
		* Türetilmiş sınıfın geçersiz kılınması (veya sanal işlevi yeniden tanımlaması) zorunlu değildir, bu durumda fonksiyonun temel sınıfı kullanılır.
		* Bir sınıf sanal yıkıcıya sahip olabilir, ancak sanal bir kurucu olamaz.	
*/
//---------------------------------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;
class dortgen
{
    public:
      virtual int alan(int taban, int yukseklik){
        return taban*yukseklik;
      }
      int cevre(int taban, int yukseklik){
        return 2*(taban+yukseklik);
      }
};

class ucgen : public dortgen
{
    public:
      int alan(int taban, int yukseklik){
        return (taban*yukseklik)/2;
      }

};

int main()
{
    dortgen *ptr; // ptr temel sınıfa ait bir pointer
    ucgen nesne1;   //nesne1'de türemiş sınıfa ait bir nesne

  ptr = &nesne1; // Temel sınıfa ait bir pointera türemiş sınıfın adresini atayabiliriz
  cout<<ptr->alan(3,4)<<endl;   // Ekranda hangi şeklin alanı hesaplandı ? 
  // alan() fonksiyonu virtual tanımlandığı için türemiş sınıfın fonksiyonu çağrıldı.
  // alan() fonk. virtual olmasaydı, dortgen sınıfının alan() fonk. çağrılırdı - DENE!

return 0;
}
*/
//-------------------------------------------------------------------------
