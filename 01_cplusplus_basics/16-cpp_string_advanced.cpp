#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
/*
  // string kopyalama, c_str()
  string str = "Nesne Yönelimli Programlama";
  char cstr[100];
  strcpy(cstr,str.c_str());
  cout<<cstr<<endl;
  cout<<"ilk harf: "<<cstr[0]<<endl;
*/
//-----------------------------------------------

  for(int x=0;x<5;x++){
    for(int i=0;i<10;i++){
      cout<<i;
    }
  }
  cout<<endl;
  
  //string str = "Nesne Yönelimli Programlama";
  string str("Nesne Yönelimli Programlama");

  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
  cout<<"length : "<<str.length()<<endl;    // aynı
  cout<<"capacity : "<<str.capacity()<<endl;  // bellekte ayrılan yer
  str.reserve(50); // yeni yer ayrılması istenir, ayrılan yer daha fala olabilir
  cout<<"new capacity : "<<str.capacity()<<endl;  // bellekte ayrılan yer
  cout<<"Max size : "<<str.max_size()<<endl;  // ulaşılabilecek maximum boyut

  str.shrink_to_fit();
  cout<<"new new capacity : "<<str.capacity()<<endl;

  str.clear();
  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
  if(str.empty()) cout<<"Boş String"<<endl;

/*
  str.resize(str.size()+10);
  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
*/
/*
  str.resize(str.size()+10,'-');
  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
*/
/*
  str.resize(str.size()-10);
  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
*/

// geriye kalan string türünün fonksiyonlarını teker teker inceleyelim

// data, copy, find, substr, compare, operator+=, operator[], at, back, front, append, push_back, assign, insert,erase,replace, swap(hem üye fonksiyon, hem de 2 string alan fonksiyon),pop_back,operator+,relational operators, operator>>, operator<<, getline

/*
  Örnek Projeler
  10:07:45:145 den saat dakika saniye gibi bilgileri çıkaralım

  öğrenci notlarını hesaplayalım ve 
    ad soyad a göre,
    harfli nota göre sıralayalım
    ad soyad büyük harfe çevirelim
    girilen cümlenin hece sayısını bulalım
*/  

  return 0;
}
