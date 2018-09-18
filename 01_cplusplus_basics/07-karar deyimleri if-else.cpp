#include <iostream>
#define ARASINAV_K .45
#define FINAL_K    .55
using namespace std;

int main() {
  double a,f,ort;
  cout<<"Arasınav: ";
  cin>>a;
  cout<<"Final    :";
  cin>>f;
  ort=ARASINAV_K * a + FINAL_K * f;
//--------------------------------------------------

 //  if-else ifadesi
 if( ort<40 ){       // koşul ifadesi
    cout<<ort<<" -> Kaldı\n";
  }
  else {              // if deyimindeki koşul sağlanmazsa
    cout<<ort<<" -> Geçti\n";
  }

//---------------------------------------------------
// koşul operatörü kullanımı (sadece eşitleme durumunda)
 /* 
 string sonuc="";
  sonuc=(ort<40)?"Kaldı":"Geçti";
  cout<<ort<<" -> "<<sonuc<<"\n";   
  */
//-----------------------------------------------------
 /*
 // if, else if, else koşul merdiveni. örnek uyg: harfli not hebabı 
 if( ort<40 ){       // koşul ifadesi
    cout<<ort<<" -> Kaldı\n";
  }
  else if (ort<55) {              
    cout<<ort<<" -> Şartlı Geçti\n";
  }
  else{               // hiç bir koşul sağlanmazsa
    cout<<ort<<" -> Şartlı Geçti\n";
  }
  */
//--------------------------------------------------------
 /*
 // çoklu şartlarda koşul operatörü (nested)
  string sonuc="";
  sonuc=(ort<40)?"Kaldı":(ort<55)?"Şartlı Geçti":"Geçti";
  cout<<ort<<" -> "<<sonuc<<"\n";
*/
//--------------------------------------------------------
/*
  // nested (içiçe) koşul ifadeleri
  double kanaat = 3.5;
  if(ort<45){
    cout<<ort<<" -> Kaldı"<<endl;
    if (ort>39 && kanaat >2.5){
      cout<<ort<<" -> Şartlı Geçebilir"<<endl;
    }
  }
*/
//------------------------------------------------------
/*
  kontrol edilecek koşul sadece eşitlik durumunu içeriyorsa switch-case kullanılması daha uygundur.
*/
/*
  char harf=' ';
  if(ort<40)
    harf='F';
  else if(ort<45)
    harf='D';
  else if(ort<60)
    harf='C';
  else if(ort<80)
    harf='B';
  else if(ort<=100)
    harf='A';
  else
    harf='E';
// neden else if içerisinde aralık kontrol edilmiyor?
  cout<<ort<<" -> ";
  switch(harf){
    case 'A':
      cout<<"Mükemmel"<<endl;
      break;
    case 'B':
      cout<<"İyi iş çıkardın"<<endl;
      break;
    case 'C':
      cout<<"Dersi geçtin, iyisin"<<endl;
      break;
    case 'D':
      cout<<"Seneye daha ilginç şeyler anlatılacak"<<endl;
      break;
    default:
      cout<<"Eksik Puan"<<endl;
  }
  // 1. break kullanılmazsa ne olur?
  // harf değişkeni string türünden olabilir mi?
*/
//----------------------------------------------------
/*
  // iç içe swtich-case
  switch(harf) {
   case 'A': 
      cout << "Dış switch-case durumu";
      switch(ch2) {
         case 'A':
            cout << "İç switch-case durumu";
            break;
         case 'B': // ...
      }
      break;
   case 'B': // ...
   // not yazılımı üzerinden bir örnek düşününü ve kodlayın...
}
*/  

  return 0;
}
