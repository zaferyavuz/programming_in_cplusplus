#include <iostream>
using namespace std;


int main() {
/*  
  // 1 boyutlu dinamik bir dizi
  int *p;
  int n=10;
	p = new int[n];
	p++;
	*p = 35;
*/
//-----------------------------------------
/*
// öğrenci not ortalaması
  int n;
  cout<<"n:";
  cin>>n;
  double toplam=0;
  double *notlar = new double[n];
  for(int i=0;i<n;i++){
    cout<<i+1<<" >";
    cin>>notlar[i];
    toplam+=notlar[i];
  }
  cout<<"ort:"<<toplam/n<<endl;
*/  
//------------------------------------------
/*
	// 2D array
	int** a = new int*[rowCount];
	for(int i = 0; i < rowCount; ++i)
    	a[i] = new int[colCount];
	
	// bellekten silinmesi
	for(int i = 0; i < sizeY; ++i) {
    	delete [] ary[i];
	}
	delete [] ary;
*/  
//------------------------------------------

// öğrenci arasınav ortalamaları
  int n,m;
  cout<<"öğrenci sayısı:";  cin>>n;
  cout<<"ödev sayısı:";     cin>>m;
  double *sinifOrtalama   = new double[m]();
  double *ogrOrtalama     = new double[n];
  double **notlar         = new double*[n];
  for(int i=0;i<n;i++){
    notlar[i] = new double[m];
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<". öğrenci için:"<<endl;
    for(int j=0;j<m;j++){
      cout<<j+1<<". ödev notu:";
      cin>>notlar[i][j];
    }
  }
  for(int j=0;j<m;j++){
    sinifOrtalama[j] = 0;
  }
  double satirtoplam = 0;
  double sutuntoplam = 0;
  double toplam = 0, ort = 0;
  for(int i=0;i<n;i++){
    sutuntoplam = 0;
    for(int j=0;j<m;j++){
      sutuntoplam       += notlar[i][j];
      sinifOrtalama[j]  += notlar[i][j];
    }
    ogrOrtalama[i] = sutuntoplam / m;
  }
  for(int j=0;j<m;j++){
    sinifOrtalama[j] /= n;
  }
  cout<<"Öğrenci Ortalamaları:"<<endl;
  for(int i=0;i<n;i++){
    cout<<i+1<<" >"<<ogrOrtalama[i]<<endl;
  }
  cout<<"Ödev Ortalamaları:"<<endl;
  for(int j=0;j<m;j++){
    cout<<j+1<<" >"<<sinifOrtalama[j]<<endl;
  }
  return 0;
}
