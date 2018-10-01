#include <iostream>
#define ARASINAV_K 0.4
#define FINAL_K    0.6
using namespace std;

int main() {
  int i,n,t;
  double a,f,ort,ortort,ort_a,ort_f;
  cout<<"Öğ. Say.(N) :  ";
  cin>>n;
  double atop=0,ftop=0,ort_top=0; // ilk değer atama önemli
  for(i=0;i<n;i++){
    cout<<"["<<i+1<<"] Arasınav : ";
    cin>>a;
    cout<<"["<<i+1<<"] Final    : ";
    cin>>f;
    ort = ARASINAV_K*a + FINAL_K*f;
    atop+=a;
    ftop+=f;
    ort_top+=ort;
    ort_a = atop/(i+1);
    ort_f = ftop/(i+1);
    ortort = ort_top/(i+1);
    cout<<"Ortalama     : "<<ort<<endl;
  }
  cout<<"=========================="<<endl; 
  cout<<"Arasınav Ortalama : "<<ort_a<<endl;
  cout<<"Final Ortalama    : "<<ort_f<<endl;
  cout<<"Toplam Ortalama   : "<<ortort<<endl;

  return 0;
}
