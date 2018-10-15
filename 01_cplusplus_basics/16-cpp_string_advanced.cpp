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
  
  string str = "Nesne Yönelimli Programlama";
  cout<<str<<endl;
  cout<<"Size : "<<str.size()<<endl;
  cout<<"length : "<<str.length()<<endl;    // aynı
  cout<<"Max size : "<<str.max_size()<<endl;  // ulaşılabilecek maximum boyut
  
  return 0;
}
