#include "Bolum.h"

Bolum::Bolum()
{
    //ctor
    rafSayaci = 0;
}


int Bolum::rafEkle(const Raf &r){

    if(rafSayaci < RAF_KAPASITESI) {
       raflar[rafSayaci ++] = r;
       return rafSayaci;
    }
    return -1;
}

int Bolum::rafCikar(enum yayinTuru r){
  return 0;
}


Raf& Bolum::rafBul(enum yayinTuru t){
    int index;
    for(index = 0; index < RAF_SAYISI; index ++){
        if(raflar[index].yayinTuruGetir() == t){
            return raflar[index];
        }
    }
    return raflar[0];
}


void Bolum::kitapEkle(enum yayinTuru r, const kitap &k){
    Raf& raf = rafBul(r);
    raf.kitapEkle(k);
}


int Bolum::kitapAra(enum yayinTuru r, const string &kitapAdi){
    Raf& raf = rafBul(r);
    return raf.kitapAra(kitapAdi);
}

int Bolum::kitapCikar(enum yayinTuru r, const string &kitapAdi){

    return -1;
}

Bolum::~Bolum()
{
    //dtor
}