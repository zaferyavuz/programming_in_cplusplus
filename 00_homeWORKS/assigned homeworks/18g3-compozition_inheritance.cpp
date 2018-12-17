/*
Burada yazılan sınıflar sadece fikir vermek amaçlıdır, mutlaka böyle olması gerekmemektedir. Sorumluluk öğrenciye aittir.
*/
class Akademisyen {

};
class Ogrenci {

};
class Randevu {

};
class RandevuSistemi{
  public:
    void menu(){
      cout<<"[1]. Öğrenci Ekle"<<endl;
      cout<<"[2]. Akademisyen Ekle"<<endl;
      cout<<"[3]. Öğrenci Randevu Listele"<<endl;
      cout<<"[?]. ......."<<endl;
      cout<<"[4]. Akademisyen Randevu Listele"<<endl;
      cout<<"[9]. Randevu Ekle"<<endl;
    }
  private:
    Akademisyen a[100];
    Ogrenci b[100];
    Randevu r[300];
};
int main() {
  RandevuSistemi rs;
  rs.menu();
}
//-----------------------------------------------------------------------------------------------------
/*
3. ödevde tarih string yapısını bölme amaçlı kullanmak için yardımcı kod parcası
*/
/*
#include <iostream>
#include <stdlib.h> // atoi için
using namespace std;
int main() {
  string t="12.12.2018";
  int gun = atoi(t.substr(0,2).c_str());
  int ay = atoi(t.substr(3,2).c_str());
  int yil = atoi(t.substr(6,4).c_str());
  cout <<gun<<"/"<<ay<<"/"<<yil<<endl;
}
*/
