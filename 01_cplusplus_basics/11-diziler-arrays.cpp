#include <iostream>
#include <iomanip>
using namespace std;
/*  DİZİLER - ARRAYS
		. Aynı veri tipinden birden çok veri içeren yapılardır
		. Belli bir boyutu vardır, yani kaç eleman içerdiği bellidir (dizinin boyutu)
		. aynı türden bireysel değişkenleri 
		sayi, sayi1, sayi2, ..., sayi50 vs tanımlamak yerine dizi tanımlanır ve dizinin adına sıra numarası (indis,index) verilerek o elemana erişilir.
		. diziler lineer veri türüdür, yani elemanlar bellekte peşpeşe dizilirler.
		. sıra numarası (indis) c/c++ dilinde 0 dan başlar

		...
		int sayi[100];	// 100 elemanlı int tipinde ve sayi isminde dizi
		double r[10];
		char s[100];	
		...
		
		. DİZİLERE İLK DEĞER VERME
			int sayi[] = {2,3,5,6,9};	// 5 elemanlı dizi
			sayi[0] = 10;				// ilk eleman 10 olarak ayarlanıyot
			char s[] = {'B','i','l','g','i','s','a','y','a','r'};
			
      
*/
//-------------------------------------------------------------
// fonksiyonlara parametre olarak dizilerin verilmesi için kullanılacak fonk. lar
double OrtalamaBul(int dizi[], int boyut) {
  int i, top = 0;       
  double ort;         
  for (i = 0; i < boyut; i++) {
      top += dizi[i];
   }
   ort = double(top) / boyut;
   return ort;
}

double OrtalamaBul2(int dizi[5], int boyut) {
  int i, top = 0;       
  double ort;         
  for (i = 0; i < boyut; i++) {
      top += dizi[i];
   }
   ort = double(top) / boyut;
   return ort;
}

double OrtalamaBul3(int *dizi, int boyut) {
  int i, top = 0;       
  double ort;         
  for (i = 0; i < boyut; i++) {
      top += *(dizi+i);
   }
   ort = double(top) / boyut;
   return ort;
}
//-------------------------------------------------------------
int main() {

//----------------------------------------------------------
//	Dizi elemanlarına erişim
/*
	int n,SUTUN1=6,SUTUN2=7;
  cout<<"N:";
	cin>>n;
	int sayi[n];
	for(int i=0;i<n;i++){
		cout<<i<<". sayi : ";
		cin>>sayi[i];
	}
	cout<<setw(SUTUN1)<<"Sıra"<<setw(SUTUN2)<<"Deger"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(SUTUN1)<<i<<setw(SUTUN2)<<sayi[i]<<endl;
	}
  // Dizi elemanlarının toplamını bulunuz
  // En küçük, en büyük elemanı, ortalama bulunuz
  // Ortalamadan küçük elemanları, ortalamadan büyük elemanları bulunuz
  // 2. max, ve 2. min elemanı bulunuz
  // dizinin matematikteki formülüne göre standar sapmasını bulunuz
*/
//---------------------------------------------------------------
//  Çok Boyutlu Dizi
/*
    . Birden çok boyutlu dizler C++ tarafından desteklenmektedir
    . 2 boyutlu dizi - matris olarak adlandırılabilir
    . 2 den daha yüksek boyutlu diziler tanımlamak da mümkündür, genel ismi tensor olarak adlandırılır
      int matris1[20][20];   // veri yapılarında daha ayrıntılı görülecek
      int tensor[10][20][30];
      unsigned char rgb[3][512][512];   // 512x512 boyutlu renkli bir resim için kullanılabilir
*/
/*
  int a[3][4] = {       // matrislere İLK DEĞER atama
   {0, 1, 2, 3} ,   //  satir 1 (index 0) 
   {4, 5, 6, 7} ,   //  satir 2 (index 1) 
   {8, 9, 10, 11}   //  satir 3 (index 2) 
  };
  int b[3][4] = {  
   {10, 11, 22, 43} ,   //  satir 1 (index 0) 
   {43, 51, 46, 47} ,   //  satir 2 (index 1) 
   {85, 98, 10, 71}     //  satir 3 (index 2) 
  };
  int c[3][4]={0};

  // matris toplamı
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      c[i][j] = a[i][j] + b[i][j];  
      cout<<setw(4)<<c[i][j]; 
    }
    cout<<endl;
  }
  */
  // matris çarpımı kodlayın (boyutlar uygun olmalı, kontrol edin)
  // transpozu kodlayın (kare matris için)
  // çıkarma kodlayın
  // matisin izini (trace) bulun (köşegen üzerindeki elemanların toplamı) (kare matris için)
  // matrisin alt ve üst üçgen bölgelerini ekrana yazın (kare matris için)
//---------------------------------------------------------------
/*
	Dizi ve Pointer ilişkisi
		. dizi ismi	ilk elemanı gösteren bir pointer dir
		. int a[10]; tanımı yapıldığında "&a[0] = a" olur
*/
/*	
  int SUTUN1=6,SUTUN2=7;
	double r[]={3.0,2.5,10.0,-2.3,9.8};	// 5 elemanlı dizi
	double *p;
	p = r;		// pointer diziyi gösteriyor
		
	cout<<setw(SUTUN1)<<"Sıra"<<setw(SUTUN2)<<"Deger"<<endl;
	for(int i=0;i<5;i++){
		cout<<setw(SUTUN1)<<i<<setw(SUTUN2)<<*(p+i)<<endl;
	}
 */ 
//--------------------------------------------------------------
/*
    FONKSİYONLARA DİZİLERİN PARAMETRE OLARAK GÖNDERİLMESİ
      . 3 farklı gönderim şekli mevcut

      1. pointer olarak: burada fonksiyonda formal parametre olarak pointer tanımlanır
        void f(int *p) {
          ...
        }

      2. boyutu belli dizi şeklinde:
        void f(int dizi[10]) {
          ...
        }  

      3. boyutu belirsiz dizi şeklinde (pointer gibi)
        void f(int dizi[]) {
          ...
        }
*/
   int a[5] = {1000, 2, 3, 17, 50};
   double o;

   // dizinin fonksiyona parametre olarak verilmesi
   //o = OrtalamaBul( a, 5 ) ;
   //o = OrtalamaBul2( a, 5 ) ;
   o = OrtalamaBul3( a, 5 ) ;
 
   // output the returned value 
   cout << "Ortalama: " << o << endl;

//--------------------------------------------------------------
  return 0;
}
