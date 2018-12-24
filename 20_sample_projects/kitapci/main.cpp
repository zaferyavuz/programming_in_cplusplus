//CPP program to illustrate pair STL 
#include <iostream>
#include "kitap.h"
#include "Bolum.h"

using namespace std;

int main()
{
    kitap k("The Lord of The Rings", "Tolkien", Roman);
    kitap k1("Charlie and chocolate factory", "Dahl", Roman);
    Bolum b;

    Raf r;
    r.yayinTuruSetle(Roman);

    b.rafEkle(r);
    b.kitapEkle(Roman, k);
    b.kitapEkle(Roman, k1);

    if ( b.kitapAra(Roman, "The Lord of The Rings") != -1)
        cout << "Kitap Roman rafinda " << b.kitapAra(Roman, "The Lord of The Rings") <<"inci siradadir" << endl;

    if ( b.kitapAra(Roman, "Charlie and chocolate factory") != -1)
        cout << "Kitap Roman rafinda " << b.kitapAra(Roman, "Charlie and chocolate factory") <<"inci siradadir" << endl;

    return 0;
}