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
 // çoklu şartlarda koşul operatörü
  string sonuc="";
  sonuc=(ort<40)?"Kaldı":(ort<55)?"Şartlı Geçti":"Geçti";
  cout<<ort<<" -> "<<sonuc<<"\n";
*/

  return 0;
}
