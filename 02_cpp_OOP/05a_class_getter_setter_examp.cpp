#include <iostream>
#define AK 0.5
#define FK 0.5
using namespace std;

class Ogrenci{
  public:
    void setAd(string a){
      ad = a;
    }
    void setSoyad(string s){
      soyad = s;
    }
    void setID(int i){
      id = i;
    }
    void setAraSinavNot(double a){
      araSinavNot = a;
    }
    void setFinalNot(double f){
      finalNot = f;
    }
    void setOrtalama(double o){
      ortalama = o;
    }
    void setHarfNot(string h){
      harfNot = h;
    }
    string getAd(){
      return ad;
    }
    string getSoyad(){
      return soyad;
    }
    int getID(){
      return id;
    }
    double getAraSinavNot(){
      return araSinavNot;
    }
    double getFinalNot(){
      return finalNot;
    }
    double getOrtalama(){
      return ortalama;
    }
    string getHarfNot(){
      return harfNot;
    }
    double OrtalamaHesapla();
    string HarfNotHesapla();
  private:
    string ad;
    string soyad;
    int id;
    double araSinavNot;
    double finalNot;
    double ortalama;
    string harfNot;

    bool ortalamaHesaplandi;
};
double Ogrenci::OrtalamaHesapla() {
  ortalamaHesaplandi = true;
  ortalama = AK*araSinavNot + FK*finalNot;
  return ortalama;
}
string Ogrenci::HarfNotHesapla(){
  if(!ortalamaHesaplandi) return "E";
  if(ortalama<40) return "FF";
  else if(ortalama<45) return "DC";
  else if(ortalama<55) return "CC";
  else if(ortalama<65) return "CB";
  else if(ortalama<75) return "BB";
  else if(ortalama<85) return "BA";
  else if(ortalama<=100) return "AA";
  else return "E";
}
int main() {
   Ogrenci o1;
   o1.setAd("Ferdi");
   o1.setSoyad("Besli");
   o1.setID(123);
   o1.setAraSinavNot(50.3);
   o1.setFinalNot(85);

   o1.OrtalamaHesapla();
   o1.HarfNotHesapla();

   cout<<o1.getAd()<<" "<<o1.getSoyad()<<" "<<o1.getOrtalama()<<endl;   
   return 0;
}

// https://codeshare.io/G7XMpY
