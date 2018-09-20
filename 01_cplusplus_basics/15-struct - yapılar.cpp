#include <iostream>
using namespace std;

/*
	. struct (yapı) farklı türde verileri bir arada tutan bir veri yapısıdır.
	. dizilerde aynı tür veriler varken, struct larda aynı ya da farklı türden veriler olabilir
	. Örnek Bir Kitap struct içerisinde
		- baslik (string)
		- yazar (string)
		- konu (string)
		- id (int)
	öznitelikleri olabilir.
*/	
	struct Kitap {
		string baslik;
		string yazar;
		string konu;
		int id;
	}; 

void KitapYaz(Kitap k){
  cout << "Başlık: " << k.baslik <<endl;
  cout << "Yazar : " << k.yazar <<endl;
  cout << "Konu  : " << k.konu <<endl;
  cout << "id    : " << k.id <<endl;
}

// struct pointer kullanımı
void KitapYaz2(Kitap *k){
  cout << "Başlık: " << k->baslik <<endl;
  cout << "Yazar : " << k->yazar <<endl;
  cout << "Konu  : " << k->konu <<endl;
  cout << "id    : " << k->id <<endl;
}
int main () {
 
  struct Kitap k1,k2;
  
  // elemanlara erişim için "." nokta operatörü kullanılır
  k1.baslik="C++ Nesne Yönelimli ile Programlama";
  k1.yazar ="Mustafa Sağlam";
  k1.konu = "C++ Programlama";
  k1.id = 123456;

  k2.baslik="C ile Programlama";
  k2.yazar ="Rifat Çölkesen";
  k2.konu = "C Programlama";
  k2.id = 123457;
 
  cout << "Kitap 1"<<endl;
  cout << "Başlık: " << k1.baslik <<endl;
  cout << "Yazar : " << k1.yazar <<endl;
  cout << "Konu  : " << k1.konu <<endl;
  cout << "id    : " << k1.id <<endl;

  cout << "Kitap 2"<<endl;
  cout << "Başlık: " << k2.baslik <<endl;
  cout << "Yazar : " << k2.yazar <<endl;
  cout << "Konu  : " << k2.konu <<endl;
  cout << "id    : " << k2.id <<endl;
  
//-----------------------------------------------------------------------
// struct yapılarının fonksiyona parametre olarak gönderilmesi
/*
  //struct Kitap k1,k2;
  Kitap k1,k2;    // bu şekilde de tanımlanabilir.

  k1.baslik="C++ Nesne Yönelimli ile Programlama";
  k1.yazar ="Mustafa Sağlam";
  k1.konu = "C++ Programlama";
  k1.id = 123456;

  k2.baslik="C ile Programlama";
  k2.yazar ="Rifat Çölkesen";
  k2.konu = "C Programlama";
  k2.id = 123457;

  cout << "Kitap 1"<<endl;
  KitapYaz(k1);

  cout << "Kitap 2"<<endl;
  KitapYaz(k2);

  cout<<"------------------------------------"<<endl;
  // Pointer kullanımı
  cout << "Kitap 1 (Pointer)"<<endl;
  KitapYaz2(&k1);

  cout << "Kitap 2 (Pointer)"<<endl;
  KitapYaz2(&k2);
*/
//------------------------------------------------------------------
/*
  typedef kullanımı

typedef struct {
		string baslik;
		string yazar;
		string konu;
		int id;
} Kitap;

şeklinde bir tanımlama da yapılabilir, bu durumda

Kitap k1,k2;  

şeklinde bir kullanım mevcut olur

Esasen "typedef" genel amaçlı kullanılan bir anaktar kelime, şöyle kullanımı hatırlayın;

typedef long int *pint32;
pint32 x, y, z;

*/
//------------------------------------------------------------------
   return 0;
}
