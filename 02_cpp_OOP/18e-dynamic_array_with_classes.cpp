#include <iostream>
#include <fstream>
using namespace std;

class Ders{
  public:
    Ders(int ogrSayi=4,int odevSayi=3){
      this->ogrSayi = ogrSayi;
      this->odevSayi = odevSayi;
      odevOrtalama = new double[odevSayi];
      ogrOrtalama  = new double[ogrSayi];
      notlar = new double*[ogrSayi];
      for(int i=0;i<ogrSayi;i++){
        notlar[i] = new double[odevSayi];
      }
    }
    ~Ders(){
      delete ogrOrtalama;
      delete odevOrtalama;
      for(int i=0;i<ogrSayi;i++){
        delete notlar[i];
      }
      delete notlar;
    }
    void notlarOku(){
      for(int i=0;i<ogrSayi;i++){
        cout<<i+1<<". ogrencinin"<<endl;
        for(int j=0;j<odevSayi;j++){
          cout<<j+1<<". ödev notu:";
          cin>>notlar[i][j];
        }
      }  
    }
    void dosyadanNotlarOku(ifstream &oku){
      for(int i=0;i<ogrSayi;i++){
        for(int j=0;j<odevSayi;j++){
          oku>>notlar[i][j];
        }
      }  
    }
    void ogrOrtalamaBul(){
      double toplam=0;
      for(int i=0;i<ogrSayi;i++){
        toplam=0;
        for(int j=0;j<odevSayi;j++){
          toplam += notlar[i][j];
        }
        ogrOrtalama[i] = toplam / odevSayi;
        cout<< i+1 << ". öğrenci ort="
            << ogrOrtalama[i]<<endl;
      }
    }
    void odevOrtalamaBul(){
      double toplam=0;
      for(int j=0;j<odevSayi;j++){
        toplam = 0;
        for(int i=0;i<ogrSayi;i++){
          toplam += notlar[i][j];
        }
        odevOrtalama[j] = toplam / ogrSayi;
        cout<< j+1 << ". ödev ort="
            << odevOrtalama[j]<<endl;
      }
    }
    // geri dönüş değeri pointer olan fonk.
    double* ogrenciNotlarPtr(int i){
      return notlar[i];
    } 
  private:
    int ogrSayi;
    int odevSayi;
    double **notlar;
    double *odevOrtalama;
    double *ogrOrtalama;
};


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
  double toplam=0,max=-9999,min=9999;
  double *notlar = new double[n];
  for(int i=0;i<n;i++){
    cout<<i+1<<" >";
    cin>>notlar[i];
    toplam+=notlar[i];
    if( notlar[i] > max ) {
      max = notlar[i];
    }
    if( notlar[i] < min ) {
      min = notlar[i];
    }
  }
  cout<<"ort:"<<toplam/n<<endl;
  cout<<"max:"<<max<<endl;
  cout<<"min:"<<min<<endl;
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
/*
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
  */
//---------------------------------------

// Yukarıdaki class yapısı kullanarak
/*
  Ders nyp;
  nyp.notlarOku();
  nyp.ogrOrtalamaBul();
  nyp.odevOrtalamaBul();
*/
/*
  Ders nyp;
  ifstream oku;
  oku.open("a.txt");
  nyp.dosyadanNotlarOku(oku);
  nyp.ogrOrtalamaBul();
  nyp.odevOrtalamaBul();

// geri dönüş değeri pointer olan fonk.
  double *ogrNot;
  ogrNot = nyp.ogrenciNotlarPtr(2);
  cout<<ogrNot[1]<<endl;
*/
//---------------------------------------
/*
  Ders *dersler = new Ders[52];
  dersler[0].notlarOku();
*/
//-----------------------------------------
  Ders dersler[52] = {Ders(2,1),Ders(3,4)};

  return 0;
}
