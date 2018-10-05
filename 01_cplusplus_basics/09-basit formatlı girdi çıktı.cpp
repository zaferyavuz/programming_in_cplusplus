#include <iostream>
#include <iomanip>
using namespace std;

int main() {
/*
    <iostream>
      bu kütüphanede standart giriş çıkış fonksiyonları tanımlıdır
      cout, cin, cerr, clog
    <iomanip>
      bu kütüphanede formatlı giriş çıkış fonksiyonları tanımlıdır
      setw, setprecision
    <fstream>
      bu kütüphanede dosya üzerinde işlem yapan fonksiyonlar ve türler tanımlıdır,
      fstream, ifstream, ofstream ...
*/
//-------------------------------------------------------

  char ad[50];
  cout << "Adınız : ";
  cin >> ad;
  cout << "Merhaba " << ad << endl;

//------------------------------------------------------
// setw(n) formatlı yazdırma fonksiyonu
// #include <iomanip> eklenmeli
// setprecison - hane sayısını belirler
/*
  cout<<setw(15)<<"Ad";
  cout<<setw(15)<<"Arasınav";
  cout<<setw(15)<<"Final";
  cout<<setw(15)<<"Ortalama";
  cout<<endl;
  int a=25,f=55;            // rasgele başlangıç değerleri
  double a_d,f_d,ort;
  for(int i=0;i<10;i++){
    a=(a*f*f+53)%100;          // 0-100 arası bir not elde et
    f=(f*a*a+71)%100;
    a_d = (double)a;
    f_d = (double)f;
    ort=0.35165* a_d + 0.64835*f_d;
    cout<<setw(15)<<i+1;
    cout<<setw(15)<<a;
    cout<<setw(15)<<f;
    cout<<setw(15)<<setprecision(10)<<ort<<endl;
    //cout<<setw(15)<<fixed<<setprecision(10)<<ort<<endl;
  }
*/
    
/*
  double a = 30;
  double b = 10000.0;
  double pi = 3.1416;
  cout.precision (5);
  cout <<   showpoint << a << '\t' << b << '\t' << pi << '\n';
  cout << noshowpoint << a << '\t' << b << '\t' << fixed << setprecision(2)<< pi << '\n';
  
  //cout << noshowpoint << a << '\t' << b << '\t';
  //cout<<scientific;
  //cout.precision(2);
  //cout<< pi << '\n';
  */

//--------------------------------------------------------
/*    
  cin>>a>>b>>c;  // birden çok değişken almak
  
*/
  return 0;
}
