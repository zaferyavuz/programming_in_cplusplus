// main.cpp
#include <iostream>
#include "Ogrenci.h"
using namespace std;

int main() {
   cout<<"Nesne yaratılmadan önce"<<endl;
   Ogrenci o1;
   Ogrenci o2("Zafer","Yavuz",1234);

   cout<<"Nesne yaratıldıktan sonra"<<endl;
o2.yazdir2();
  return 0;
}

//====================================================
// Ogrenci.cpp
#include <iostream>
#include "Ogrenci.h"
#define AK 0.5
#define FK 0.5
using namespace std;
Ogrenci::Ogrenci(){
    ortalamaHesaplandi = false;
    cout<<"Nesne oluşturuldu. (parametresiz yapıcı fonksiyon)"<<endl;
}
Ogrenci::Ogrenci(string ad, string soyad, int ID){
  ortalamaHesaplandi = false;
  harfNot = "E";
  this->ad = ad;
  this->soyad = soyad;
  this->id = ID;
  this->araSinavNot = 0;
  this->finalNot = 0;
}
Ogrenci::Ogrenci(string a,string s,int i,double as,double f){
  ortalamaHesaplandi = false;
  cout<<"Nesne oluşturuldu. (parametreli yapıcı fonksiyon)"<<endl;
  ad = a;
  soyad = s;
  id = i;
  araSinavNot = as;
  finalNot = f;
}
void Ogrenci::setAd(string a){
  ad = a;
}
void Ogrenci::setSoyad(string s){
  soyad = s;
}
void Ogrenci::setID(int i){
  id = i;
}
void Ogrenci::setAraSinavNot(double a){
  araSinavNot = a;
}
void Ogrenci::setFinalNot(double f){
  finalNot = f;
}
void Ogrenci::setOrtalama(double o){
  ortalama = o;
}
void Ogrenci::setHarfNot(string h){
  harfNot = h;
}
string Ogrenci::getAd(){
  return ad;
}
string Ogrenci::getSoyad(){
  return soyad;
}
int Ogrenci::getID(){
  return id;
}
double Ogrenci::getAraSinavNot(){
  return araSinavNot;
}
double Ogrenci::getFinalNot(){
  return finalNot;
}
double Ogrenci::getOrtalama(){
  return ortalama;
}
string Ogrenci::getHarfNot(){
  return harfNot;
}
void Ogrenci::yazdir(){
  cout<<"AD: " <<ad <<endl;
  cout<<"SOYAD: " <<soyad<<endl;
  cout<<"ID: " <<id <<endl;
  cout<<"ARASINAV NOT: " <<araSinavNot<<endl;
  cout<<"FINAL NOT: " <<finalNot <<endl;
  cout<<"ORTALAMA: " <<ortalama<<endl;
  cout<<"HARFLI NOT: " <<harfNot <<endl;
}
void Ogrenci::yazdir2(){
  cout<<ad<<" "<<soyad<<" "<<harfNot<<endl;
}
double Ogrenci::OrtalamaHesapla() {
  ortalamaHesaplandi = true;
  ortalama = AK*araSinavNot + FK*finalNot;
  return ortalama;
}
string Ogrenci::HarfNotHesapla(){
  if(!ortalamaHesaplandi){ harfNot = "E"; } 
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

//========================================================
// Ogrenci.h
using namespace std;
class Ogrenci{
  public:
    Ogrenci();
    Ogrenci(string ad, string soyad, int ID);
    Ogrenci(string a,string s,int i,double as,double f=50);
    void setAd(string a);
    void setSoyad(string s);
    void setID(int i);
    void setAraSinavNot(double a);
    void setFinalNot(double f);
    void setOrtalama(double o);
    void setHarfNot(string h);
    string getAd();
    string getSoyad();
    int getID();
    double getAraSinavNot();
    double getFinalNot();
    double getOrtalama();
    string getHarfNot();
    double OrtalamaHesapla();
    string HarfNotHesapla();
    void yazdir();
    void yazdir2();
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
