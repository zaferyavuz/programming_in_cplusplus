#include <iostream>  
#define ARA_SINAV_K 0.45
#define DONEM_SONU_K 0.55
using namespace std;    

int main() {
   int araSinav,donemSonu,ort;
   cout<<"Arasınav: ";
   cin>>araSinav;
   cout<<"Dönem Sonu: ";
   cin>>donemSonu;
   ort = (araSinav + donemSonu)/2;
   ort = ARA_SINAV_K*araSinav + DONEM_SONU_K*donemSonu;
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
