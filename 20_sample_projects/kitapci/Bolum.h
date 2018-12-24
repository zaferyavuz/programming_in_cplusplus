#ifndef BOLUM_H
#define BOLUM_H

#include "Raf.h"
#include <string>

#define RAF_SAYISI 4



class Bolum
{
    public:
        Bolum();
        virtual ~Bolum();
        int rafEkle(const Raf &r);
        int rafCikar(enum yayinTuru r);
        void kitapEkle(enum yayinTuru r, const kitap &k);
        int kitapAra(enum yayinTuru r, const string &kitapAdi);
        int kitapCikar(enum yayinTuru r, const string &kitapAdi);


    private:
        Raf raflar[RAF_SAYISI];
        int rafSayaci;

        Raf& rafBul(enum yayinTuru t);
};

#endif // BOLUM_H