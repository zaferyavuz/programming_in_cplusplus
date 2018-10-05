#include <iostream>
using namespace std;

void takas_cbr(int &a,int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main () {
/*
	. referance aslında bir değişken için takma isimdir
	. zaten var olan değişkenlere ayrıca takma isim vermek için kullanılır
	. bir reference bir değişken ile başlatımlandığında o değeri temsil için artık hem değişkeni hem de reference ini kullanabiliriz
	
	Reference ile Pointer Karşılaştırması
	. 3 açıdan birbirinden farklıdır
		1. NULL olabilen reference olamaz, mutlaka bir değişkenin reference olması gerekir, pointer böyle değildir
		2. bir reference bir değişken ile başlatımlandığında değiştirilemez, pointer böyle değildir
		3. reference ilk yaratıldığında mutlaka bir değişkle başlatımlanmalıdır, pointer lar böyle değildir.
*/
   int    i;
   double d;
 
   int &r = i;
   double &s = d;
   
   i = 5;
   cout << "i : " << i << endl;
   cout << "i reference : " << r  << endl;
 
   d = 11.7;
   cout << "d : " << d << endl;
   cout << "d reference : " << s  << endl;

//-------------------------------------------------------------------
// Call by Reference, daha önce bu örnek verilmişti

//    fonksiyon çağrılırken call by value gibi çağrılırken
//    ancak fonksiyona değişkenlerin referansları kopyalanırlar
//    dolayısıyla içerikler etkilenir, çünkü değerler kopyalanmıyor, adres kopyalanıyor
/*
    int a=5,b=6;
    cout<<"Takastan Önce (a,b)=("<<a<<","<<b<<")"<<endl;
    takas_cbr(a,b);     // doğrudan fonksiyonu call by value gibi çağırıyoruz.
    cout<<"Takastan Sonra (a,b)=("<<a<<","<<b<<")"<<endl;
    // fonksiyon çağrıldığında değerler nasıl geçiyor? şekil ile anlatalım
*/
//-----------------------------------------------------------------------
   return 0;
}
