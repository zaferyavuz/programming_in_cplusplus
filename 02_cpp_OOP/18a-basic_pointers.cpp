#include <iostream>
using namespace std;

int main(){
    int *p;			// bellek organizasyonunu gösterelim
		int sayi;
		sayi = 78;
		p = &sayi;
		*p = 24;
    cout<<p<<endl;	
    cout<<*p<<endl;
    cout<<sayi<<endl;
    cout<<&sayi<<endl;
    cout<<&p<<endl;
  return 0;
}

/*
Çıktı
0x7fffeba0c7a4
24
24
0x7fffeba0c7a4
0x7fffeba0c7a8

*/
