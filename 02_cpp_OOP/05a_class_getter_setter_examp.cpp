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
    void yazdir(){
      cout<<"AD: " <<ad <<endl;
      cout<<"SOYAD: " <<soyad<<endl;
      cout<<"ID: " <<id <<endl;
      cout<<"ARASINAV NOT: " <<araSinavNot<<endl;
      cout<<"FINAL NOT: " <<finalNot <<endl;
      cout<<"ORTALAMA: " <<ortalama<<endl;
      cout<<"HARFLI NOT: " <<harfNot <<endl;
    }
    void yazdir2(){
      cout<<ad<<" "<<soyad<<" "<<harfNot<<endl;
    }
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
  if(!ortalamaHesaplandi){
    harfNot = "E";
  } 
  if(ortalama<40) harfNot="FF";
  else if(ortalama<45) harfNot="DC";
  else if(ortalama<55) harfNot="CC";
  else if(ortalama<65) harfNot="CB";
  else if(ortalama<75) harfNot="BB";
  else if(ortalama<85) harfNot="BA";
  else if(ortalama<=100) harfNot="AA";
  else harfNot="E";
  return harfNot;
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

   //cout<<o1.getAd()<<" "<<o1.getSoyad()<<" "<<o1.getOrtalama()<<endl;   
   o1.yazdir2();
   return 0;
}
