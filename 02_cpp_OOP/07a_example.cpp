#include <iostream>
#define AK 0.5
#define FK 0.5
using namespace std;

class Ogrenci{
  public:
    Ogrenci(){
      ortalamaHesaplandi = false;
      cout<<"Nesne oluşturuldu. (parametresiz yapıcı fonksiyon)"<<endl;
    }
    Ogrenci(string ad, string soyad, int ID){
      ortalamaHesaplandi = false;
      harfNot = "E";
      this->ad = ad;
      this->soyad = soyad;
      this->id = ID;
      this->araSinavNot = 0;
      this->finalNot = 0;
    }
    Ogrenci(string a,string s,int i,double as,double f=50){
      ortalamaHesaplandi = false;
      cout<<"Nesne oluşturuldu. (parametreli yapıcı fonksiyon)"<<endl;
      ad = a;
      soyad = s;
      id = i;
      araSinavNot = as;
      finalNot = f;
    }
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
int main() {

   cout<<"Nesne yaratılmadan önce"<<endl;
   Ogrenci o1;
   Ogrenci o2("Zafer","Yavuz",1234);

   cout<<"Nesne yaratıldıktan sonra"<<endl;
   o2.yazdir2();
/*
   Ogrenci o[100];


   o1.setAd("Ferdi");
   o1.setSoyad("Besli");
   o1.setID(123);
   o1.setAraSinavNot(50.3);
   o1.setFinalNot(85);

   o1.OrtalamaHesapla();
   o1.HarfNotHesapla();

   //cout<<o1.getAd()<<" "<<o1.getSoyad()<<" "<<o1.getOrtalama()<<endl;   
   o1.yazdir();

   o2.OrtalamaHesapla();
   o2.HarfNotHesapla();
   o2.yazdir();
   */
   return 0;
}

/*
n öğrenciden oluşan bir okul tanımlayın ve aşağıdaki verileri bir dosyadan
okuyarak her bir satırı bir öğrenci nesnesinin içine doldurun.
Sonra okulun ortalaması, geçen ve kalan öğrenci sayısı ile 
harfli nota göre sınıf başarı grafiği çizin... kolay gelsin...

ERHAT KİRAZ	1870	50	46	0	E
OSMAN TAŞ	2356	36	67	0	E
MERVE ERKAN	1943	20	64	0	E
CEMAL ÖZSAYGILI	1785	16	93	0	E
EBRU DEMİR	2296	83	7	0	E
CUMHUR TAŞ	828	68	95	0	E
İZZETTİN HAMDEMİRCİ	1254	7	90	0	E
ERSAGUN TUĞCUGİL	140	21	88	0	E
SÜMEYYE KARADAĞ	2302	63	14	0	E
BÜŞRA BULUÇ	1566	48	99	0	E
BURAK KARADAĞ	591	31	58	0	E
MEVSİM DEMİR	2303	63	14	0	E
BAYRAM BURULDAY	1368	98	64	0	E
İPEK SEMERCİ	2184	84	47	0	E
MURAT ALTIN	1428	54	17	0	E
AYDIN GERİLMEZ	177	63	49	0	E
YASEMİN ÇAKIR	926	63	100	0	E
AYŞENUR ARSLAN	1867	43	36	0	E
CİHAN TOKTAŞ	989	23	5	0	E
ÖZNUR ARSLAN	2145	67	20	0	E
NEFİSE KAYKA	1587	61	26	0	E
TAYLAN TEMEL	102	87	85	0	E
HALE KIZANOĞLU	966	49	88	0	E
FATİH ŞAHİN	1145	53	48	0	E
EREM ASİL 988 70 37 0 E
*/
