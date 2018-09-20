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
int main() {

//----------------------------------------------------------
//	Dizi elemanlarına erişim
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

//---------------------------------------------------------------


//---------------------------------------------------------------
  return 0;
}
