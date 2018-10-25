/*
INFORMATION HIDING
Implementation file. 
Header file (Specification file).
The header file has an extension h. 
The implementation file has an extension cpp. 
The implementation file must include the header file via the include statement.
In a include statement, user defined header files are enclosed in double quotes while system provided header files are enclosed between angular brackets. 

*/

/*
    deklerasyon obj.h dosyasında yapılır
    obj.h -> dosyasını include eden obj.cpp dosyasında implementasyon yapılır
    obj.h -> dosyasını include eden main dosyasında test edilir
        böylece obj.cpp dosyası hiç bir yerde include edilmeden hiding yapılır (gizlenir)
*/
//-----------------------------------------------------------------------
// main.cpp
#include "obj.h"
#include <iostream>
using namespace std;

int main() {
  obj o;
  cout<<o.ortalamaHesapla()<<endl;
  return 0;
}

//----------------------------------------------------------------------
/*
// obj.h
class obj {
  public:
    obj();
    double ortalamaHesapla();
  private:
    double araSinavNot;
    double finalNot;
    double ortalamaNot;
};

//--------------------------------------------------------
// obj.cpp
#include "obj.h"

obj::obj(){
  araSinavNot = 50;
  finalNot    = 60;
}
double obj::ortalamaHesapla(){
  ortalamaNot = 0.5*araSinavNot + 0.5*finalNot;
  return ortalamaNot;
}
*/

