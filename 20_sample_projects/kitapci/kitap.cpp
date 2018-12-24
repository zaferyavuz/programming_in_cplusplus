#include "kitap.h"

kitap::kitap()
{
    yazarAdi = "";
    kitapAdi = "";
    kitapTuru = Roman;
    //ctor
}

kitap::kitap(const string kAdi, const string yAdi, const enum yayinTuru t){
    yazarAdi = yAdi;
    kitapAdi = kAdi;
    kitapTuru = t;
}

void kitap::isimEkle(const string adi){
    kitapAdi = adi;
}

string kitap::isimGetir(){
    return kitapAdi;
}

void kitap::yazarEkle(const string yazar){
    yazarAdi = yazar;
}

void kitap::turEkle(const enum yayinTuru t){
    kitapTuru = t;
}

kitap::~kitap()
{
    //dtor
}