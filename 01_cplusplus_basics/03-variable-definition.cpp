#include <iostream>
using namespace std;
int main() {
  int    i, j=0, k; // i,j,k referans ismiyle kullanılabilen int türünde değişken tanımlanmıştır.
  i=5;
  j=-5;
  k=i*j;
  cout<<k<<endl;

  char   c='A', ch; // char tipi değiişkenler içerisinde 1 byte sayısal değer saklar ve ve bu deger ASCI kodudur. Değişken ASCI koduna karşılık gelen karakteri temsil eder.
  ch = 65;
  cout<<ch<<endl;

  float  f, salary;  // reel sayı türünden değişkenler
  f = 2.0;
  salary = f*f + 8.5;
  cout<<salary<<endl;

  double d;
  d = -4.0;
  cout<<d*d<<endl;
}
