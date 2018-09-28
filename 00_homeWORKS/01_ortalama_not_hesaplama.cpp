#include <iostream>        
using namespace std;    

int main() {
   int araSinav,donemSonu;
   cout<<"Arasınav: ";
   cin>>araSinav;
   cout<<"Dönem Sonu: ";
   cin>>donemSonu;
   int ort = (araSinav + donemSonu)/2;
   cout<<ort<<endl;
/*
- değişken türleri float, int, char olabilsin, sınırları zorlayalım (unsigned, long).

- değişkenler global veye lokal olabilsin, basit fonksiyon şeklinde tanımlayabiliriz.

- #define ve const ile sınav ağırlıkları belirlensin
literal kullanılabilir.

- sonucu ekrana tam sayı, virgülden sonraki x hane olarak yazdıralım (fixed, setprecision)

- operatörlerin farklı kullanımlarını kullanmaya çalışalım (++, --, /=, ...)
*/
   return 0; 

}
