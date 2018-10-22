/*
  Array of Struct + file processing
    dosyadan while dönüsü ile tüm satırları oku (sıralı erişim)
  Zafer Yavuz
  zyavuz610@gmail.com
  18.10.2018
------------------------------------*/

/*
öğrenci[ler] var
  tam ad {ad, soyad}
  numara
  araSNot
  finalNot
  ortalama
  harfNot
dosyadan okuma olacak 
/*
Dosya içeriği örneği
---------------------------------
Zafer Yavuz 123 50 60 0 E
Ferdi Besli 124 45 60 0 E
Zeynep Yılmaz 125 50 100 0 E
Merve Yavuz 126 50 60 0 E
Ali Yağız 127 50 60 0 E
Çıktı Dosya
--------------------------------
Zafer Yavuz 123 50 60 56.5 CB
Ferdi Besli 124 45 60 54.75 CC
Zeynep Yılmaz 125 50 100 82.5 BA
Merve Yavuz 126 50 60 56.5 CB
Ali Yağız 127 50 60 56.5 CB
*/

#include <fstream>
#include <iostream>
#define AK 0.35
#define FK 0.65
#define N 100
using namespace std;

struct TamAd{
  string ad;
  string soyad;
};
struct Ogrenci{
  TamAd tamAd;
  int numara;
  double araSNot;
  double finalNot;
  double ortalama;
  string harfNot;
};
double OrtalamaHesapla(double a,double f){
  return AK * a + FK * f;
}
string HarfNotHesapla(double o){
  if(o<40) return "FF";
  else if(o<45) return "DC";
  else if(o<55) return "CC";
  else if(o<65) return "CB";
  else if(o<75) return "BB";
  else if(o<85) return "BA";
  else if(o<=100) return "AA";
  else return "E";
}
void takasO(Ogrenci *o1,Ogrenci *o2){
  Ogrenci tempO;
  tempO.tamAd.ad    = o1->tamAd.ad;
  tempO.tamAd.soyad = o1->tamAd.soyad;
  tempO.numara      = o1->numara;
  tempO.araSNot     = o1->araSNot;
  tempO.finalNot    = o1->finalNot;
  tempO.ortalama    = o1->ortalama;
  tempO.harfNot     = o1->harfNot;

  o1->tamAd.ad       = o2->tamAd.ad;
  o1->tamAd.soyad    = o2->tamAd.soyad;
  o1->numara         = o2->numara;
  o1->araSNot        = o2->araSNot;
  o1->finalNot       = o2->finalNot;
  o1->ortalama       = o2->ortalama;
  o1->harfNot        = o2->harfNot;

  o2->tamAd.ad       = tempO.tamAd.ad;
  o2->tamAd.soyad    = tempO.tamAd.soyad;
  o2->numara         = tempO.numara;
  o2->araSNot        = tempO.araSNot;
  o2->finalNot       = tempO.finalNot;
  o2->ortalama       = tempO.ortalama;
  o2->harfNot        = tempO.harfNot;
}
void takasO2(Ogrenci *o1,Ogrenci *o2){
Ogrenci temp;
temp = *o1;
*o1 = *o2;
*o2 = temp;
}
void takasO3(Ogrenci o1,Ogrenci o2){
  //....... siz yazın
  Ogrenci tempO;
  tempO.tamAd.ad    = o1.tamAd.ad;
  tempO.tamAd.soyad = o1.tamAd.soyad;
  tempO.numara      = o1.numara;
  tempO.araSNot     = o1.araSNot;
  tempO.finalNot    = o1.finalNot;
  tempO.ortalama    = o1.ortalama;
  tempO.harfNot     = o1.harfNot;

  o1.tamAd.ad       = o2.tamAd.ad;
  o1.tamAd.soyad    = o2.tamAd.soyad;
  o1.numara         = o2.numara;
  o1.araSNot        = o2.araSNot;
  o1.finalNot       = o2.finalNot;
  o1.ortalama       = o2.ortalama;
  o1.harfNot        = o2.harfNot;

  o2.tamAd.ad       = tempO.tamAd.ad;
  o2.tamAd.soyad    = tempO.tamAd.soyad;
  o2.numara         = tempO.numara;
  o2.araSNot        = tempO.araSNot;
  o2.finalNot       = tempO.finalNot;
  o2.ortalama       = tempO.ortalama;
  o2.harfNot        = tempO.harfNot;
}
void structSirala(Ogrenci *o1,int boy){
  for(int i=0;i<boy;i++){
    for(int j=i;j<boy;j++){
      if(o1[i].ortalama < o1[j].ortalama) {
        //takasO(&o1[i],&o1[j]);
        //takasO2(&o1[i],&o1[j]);
        takasO3(o1[i],o1[j]);
      }
    }
  }

}
int main () {
  string dosyain = "a.txt";
  string dosyaout = "a1.txt";

  cout<<"dosyadan okuma başladı"<<endl;
  ifstream dosya;
  dosya.open(dosyain.c_str());
  Ogrenci s1[N];
  int i=0;
  while(!dosya.eof()){
    dosya>>s1[i].tamAd.ad;
    dosya>>s1[i].tamAd.soyad;
    dosya>>s1[i].numara;
    dosya>>s1[i].araSNot;
    dosya>>s1[i].finalNot;
    dosya>>s1[i].ortalama;
    dosya>>s1[i].harfNot;
    s1[i].ortalama = OrtalamaHesapla(s1[i].araSNot, s1[i].finalNot);
    s1[i].harfNot = HarfNotHesapla(s1[i].ortalama);
    i++;
  }
  dosya.close();
  cout<<"dosyadan okuma bitti"<<endl;

  structSirala(s1,i);

  cout<<"dosyadan yazma başladı"<<endl;
  ofstream dosya2;
  dosya2.open(dosyaout.c_str());
  for(int j=0;j<i;j++){
    dosya2<<s1[j].tamAd.ad<<" ";
    dosya2<<s1[j].tamAd.soyad<<" ";
    dosya2<<s1[j].numara<<" ";
    dosya2<<s1[j].araSNot<<" ";
    dosya2<<s1[j].finalNot<<" ";
    dosya2<<s1[j].ortalama<<" ";
    dosya2<<s1[j].harfNot;
    if(j!=i-1) dosya2<<endl;
  }
  cout<<"dosyadan yazma bitti"<<endl;
   return 0;
}
