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
int main () {
  string dosyain = "a.txt";
  string dosyaout = "a.txt";

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
