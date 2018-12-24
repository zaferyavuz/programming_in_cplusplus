#include "Raf.h"

Raf::Raf()
{
    kitapSayaci = 0;
    //ctor
}


int Raf::kitapEkle(const kitap &k){

   //You need to order books according to the author names
   //This is a lazy way of adding books

   if(kitapSayaci < RAF_KAPASITESI){
      kitaplar[kitapSayaci ++] = k;
      return kitapSayaci;
   }
   return -1;
}

int Raf::kitapCikar(const string &kitapAdi){
  return 0;
}

void Raf::yayinTuruSetle(enum yayinTuru t){
   tur = t;
}

enum yayinTuru Raf::yayinTuruGetir(){
   return tur;
}



int Raf::kitapAra(const string &kitapAdi){

   int index;

   //This is a lazy way of searching books, can you do better?

   for(index = 0; index < kitapSayaci; index ++){
      if(kitaplar[index].isimGetir() == kitapAdi) {
        return index;
      }
   }
   return -1;
}



Raf::~Raf()
{
    //dtor
}