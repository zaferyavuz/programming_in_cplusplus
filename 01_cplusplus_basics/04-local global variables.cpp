#include <iostream>
using namespace std;
 
int topla(int,int);

// Global değişken
int g;
 
int main () {
   // Lokal değişken:
   int a, b;
 
   a = 10;
   b = 20;
   g = a + b;
   g = topla(a,b);
   cout << g << endl;
 
   return 0;
}

int topla(int x,int y){
  // burada x,y formal değişkendir, lokal gibi işlev görür, ilk değerleri çağırıldıkları yerde verilir
  return x+y; 
}

/*
  3 tür değişken tanımlama çeşidi vardır
    1. lokal, yerel: sadece tanımlandığı blok içerisinde geçerlidir.
    2. formal değişkenler: fonksiyonlara parametre olarak aktarılan değişkenlerdir. tanımlandığı fonksiyon içerisinde geçerlidir.
    3. global: tüm bloklar dışında tanımlıdır. o dosya içerisinde her yerde geçerlidir. 

    global değişkenler ilk değer olarak sistem tarafından 0 lanır, lokal değişkenler ise kullanıcı tarafından ilk değer atanmalıdır.

    Genel kural: bir tanım ya da bildirim kendisinden sonraki satırlarda geçerlidir.

    DOĞRU
    int a=5,b=6,c;
    ...
    c=a+b;

    YANLIŞ
    c=a+b;
    ...
    int a=0,b=3,c;
*/
