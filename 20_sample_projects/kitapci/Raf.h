#ifndef RAF_H
#define RAF_H
#include "kitap.h"

#define RAF_KAPASITESI 100

class Raf
{
    public:
        Raf();
        virtual ~Raf();
        int kitapEkle(const kitap &k);
        int kitapCikar(const string &kitapAdi);
        int kitapAra(const string &kitapAdi);
        void yayinTuruSetle(enum yayinTuru t);
        enum yayinTuru yayinTuruGetir();



    private:
        kitap kitaplar[RAF_KAPASITESI];
        enum yayinTuru tur;
        int kitapSayaci;
};

#endif // RAF_H