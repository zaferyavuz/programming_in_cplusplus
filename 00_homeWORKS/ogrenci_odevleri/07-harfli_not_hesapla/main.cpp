#include <iostream>
#include <string.h>
#include <fstream>
#include <locale.h> // TURKCE DIL DESTEGI

using namespace std;

int N = 161; //ogrenci sayisi

struct Ogrenciler
{
	char Ad[30];
	char soyAd[30];
	int numara;
	int vizeNotu;
	int finalNotu;
	int ortalama;
	string harfNotu;
}ogrenciler[165];

string harfHesabi(int vizeNotu, int finalNotu)
{
	int ortalama= vizeNotu * 40/100 + finalNotu * 60/100;

if(finalNotu>45)
{
	if(ortalama>=1 && ortalama<45)
		return "FF - KALDI";	
	else if(ortalama>=45 && ortalama<55)
		return "CC";
	else if(ortalama>=55 && ortalama<65)
		return "CB";
	else if(ortalama>=65 && ortalama<75)
		return "BB";
	else if(ortalama>=75 && ortalama<85)
		return "BA";
	else if(ortalama>=85 && ortalama<=100)
		return "AA";
	else
		return "HATALI ORTALAMA HESABI";
}
else //FINALDE 45 ALAMAYAN DIREKT KALMIS SAYILIYOR.
	return "FF - KALDI";


}

int main()
{
	setlocale(LC_ALL, "Turkish"); 
	ifstream okuma;
	okuma.open("ogrenciler.txt");
	
	for(int i=0; i<N; i++)
	{
		okuma>>ogrenciler[i].Ad>>ogrenciler[i].soyAd>>ogrenciler[i].numara>>ogrenciler[i].vizeNotu>>ogrenciler[i].finalNotu>>ogrenciler[i].ortalama>>ogrenciler[i].harfNotu;
	}
  
	char geciciAd[N];
	Ogrenciler gecici[N];
  
  for (int i=0; i<N-1; i++)
    for (int j=i+1; j<N; j++)
      if ( strcmp(ogrenciler[i].Ad,ogrenciler[j].Ad) >0 )
      {
        strcpy( geciciAd, ogrenciler[i].Ad );
        gecici [i] = ogrenciler[i];
        
        strcpy( ogrenciler[i].Ad , ogrenciler[j].Ad);
        ogrenciler[i] = ogrenciler[j];
        
        strcpy( ogrenciler[j].Ad , geciciAd ); 
        ogrenciler[j] = gecici[i];
      }
	
	for(int i=0; i<N; i++)
		ogrenciler[i].ortalama = ogrenciler[i].vizeNotu * 40/100 + ogrenciler[i].finalNotu * 60/100;
	okuma.close();
	
	ofstream sonuclar;
	sonuclar.open("Sonuclar.txt");
	sonuclar<<"NO -	OGRENCI ADI SOYADI  -  VİZE - FİNAL -  ORT  - HARF NOTU"<<endl;
	for(int i=0; i<N; i++)
		sonuclar<<ogrenciler[i].numara<<" -\t"<<ogrenciler[i].Ad<< " " <<ogrenciler[i].soyAd << "       \t" << ogrenciler[i].vizeNotu<<" \t"<<ogrenciler[i].finalNotu<<" \t"<<ogrenciler[i].ortalama<<" \t"<<harfHesabi(ogrenciler[i].vizeNotu,ogrenciler[i].finalNotu)<<endl;
    
	sonuclar.close();
    
    cout << "Ortalama ve Harf hesabi basariyla yapildi.."<<endl;
    
    system("PAUSE");  
}
