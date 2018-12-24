#ifndef KITAP_H
#define KITAP_H
#include <string>

using namespace std;

enum yayinTuru{Roman, Dergi, Siir, Makale};

class kitap
{
    public:
        kitap();
        kitap(const string kAdi, const string yAdi, const enum yayinTuru t);
        virtual ~kitap();

        void isimEkle(const string adi);
        string isimGetir();
        void yazarEkle(const string yazar);
        void turEkle(const enum yayinTuru t);

    private:
        string kitapAdi;
        string yazarAdi;
        enum yayinTuru kitapTuru;
};

#endif // KITAP_H