#include <iostream>
using namespace std;

int main() {
/*
    döngülerin (tekrarlı ifadelerin) 4 temel bileşeni vardır
    1. döngü başlamadan ilk değerlerin ayarlandığı kısım (ifade1)
        . mutlak zorunlu değildir, yazılmayabilir
    2. döngünün devam etme şartı (ifade2)
        . zorunludur
        . şart sürekli sağlanıyorsa "sonsuz döngü"
        . şart hiç sağlanmıyorsa "gereksiz döngü"
    3. her döngü adımı bittiğinde çalıtırılacak kod (ifade3)
    4. döngü gözvdesi (tekrarlı ifade) (ifade 4)
*/
//--------------------------------------------------
  // for döngüsü (döngü=tekrarlı ifade)
/* 
  for (ifade1; ifade2; ifade3) {
      ifade4;
      ...
  }

  ifade1:
    . döngü başlamadan önce çalıştırılan kod dur.
    . genellikle değişkenlere ilk değer verilir
    . virgül ile ayrılan birden çok ifade yazılabilir
    . Örneğin;
        int i=0;
        i=1;      // i daha önce tanımlanmıştır
        ;         // boş geçilebilir, demekki ilk değerler daha önce verilmiştir.
        int i=0,j=5;
        init();   // fonksiyon çağrılabilir

    ifade2:
      . koşul ifadesi yazılmalıdır
      . döngünün çalışması için gerekli olan koşul[lar] buraya yazılmalıdır
      . Örneğin;
        i<10;
        i<10 && j>20;
        ...

      ifade3:
        . döngü ifadesi(ifade4) çalıştırıldıktan sonra bir sonraki döngü adımına geçerken çalıştırılacak son koddur
        . Örneğin;
          j++;
          i--;
          i++,j--;
          i++,cout<<i;

      ifade4:
        . döngünün gövdesidir
        . tekrarlanacak olan ifadeler buraya yazılır
  */
  //---------------------------------------------------
// /*
  int i;
  for(i=0;i<10;i++){
    cout<<i<<endl;
  }
// */
//----------------------------------------------------
/*
  int i,n,t;
  cout<<"N:";
  cin>>n;
  int top=0;
  for(i=0;i<n;i++){
    cout<<"["<<i+1<<"]:";
    cin>>t;
    top+=t;
    cout<<"Toplam: "<<top<<endl;
  }
*/
//---------------------------------------------------
// yukarıdaki for döngüsünün bir başka yazılış biçimi
/*
  int n;
  cout<<"N:";
  cin>>n;
  for(int i=0,t,top=0;i<n;top+=t,cout<<"Toplam: "<<top<<endl,i++){
    cout<<"["<<i+1<<"]:";
    cin>>t;
  }
*/  
//--------------------------------------------------
/*
  ...
  ifade1;
  while(ifade2){
    ifade4;
    ifade3;
  }
*/
//-------------------------------------------------
/*
  int i=0,n,t;
  cout<<"N:";
  cin>>n;
  int top=0;
  while(i<n){
    cout<<"["<<i+1<<"]:";
    cin>>t;
    top+=t;
    cout<<"Toplam: "<<top<<endl;
    i++;
  }
*/
//---------------------------------------------------
/*
  diğer döngülerden farklı olarak do-while döngüsünde döngü gövdesi olan "ifade4" ilk başta şartsız 1 kere çalışır, daha sonra şart kontrol edilir.

  ifade1;
  do{
    ifade4;
    ifade3;
  }while(ifade2);

*/
//-----------------------------------------------------
/*
  int i=0,n,t,top=0;
  cout<<"N:";
  cin>>n;
  do {
    cout<<"["<<i+1<<"]:";
    cin>>t;
    top+=t;
    cout<<"Toplam: "<<top<<endl;
    i++;
  }while(i<n);
*/
//------------------------------------------------------
/*
  // iç içe döngüler = 1...n arası sayılar toplamı
  int top,n;
  cout<<"N:";
  cin>>n;
  for(int i=1;i<=n;i++){
    top=0;
    for(int j=1;j<=i;j++){
      top+=j;
    }
    cout<<"Toplam [1..."<<i<<"]: "<<top<<endl;
  }

  // aynı program kodu diğer döngülerle de yazılabilir
  // iç içe döngülere örn; n den küçük asal sayıların bulunması
*/
//---------------------------------------------------------
//  break;
/*
    break; deyimi 2 amaçla kullanılır
      1. bir döngü içerisinden çıkmak için (döngüyü kırmak için)
        .program break deyimini gördüğünde döngüden çıkar ve hemen sonra gelen kodları çalıştırmaya başlar
        . iç içe döngülerde break deyimi içinde bulunduğu en iç döngüyü kırar
      2. switch-case ifadelerinde içinde bulunduğu case durumunu sonlandırır.
*/
/*
  int i;
  for(i=0;i<10;i++){
    if(i==6) break;
    cout<<i<<endl;
    //if(i==6) break;
  }
*/
//--------------------------------------------------------
//  continue
/*
    döngü gözdesinin geri kalanı çalıştırılmadan bir sonraki döngü adımına geçilir, döngü şartı kontrol edilir
      . for döngüsü için: continue deyiminden sonraki kodlar atlanarak arttırma kısmı çalıştırıldıktan sonra şart kontrol edilir, doğruysa döngüye devam edilir
      . while, do-while için: continue deyiminden sonraki kodlar atlanarak direk şart kontrol edilir, doğruysa döngüye devam edilir
*/
/*
  int i;
  for(i=0;i<10;i++){
    if(i==6) continue;  // i=6 olunca döngü gözdesinin geri kalanı çalıştırılmadan bir sonraki döngü adımına geçilir
    cout<<i<<endl;
    //if(i==6) continue;
  }
*/
/*
  int i=0;
  while(i<10){
    if(i==6) continue;  // i=6 olunca döngü gözdesinin geri kalanı çalıştırılmadan bir sonraki döngü adımına geçilir <sonsuz döngü olur, aşağıdaki kodu inceleyin>
    
    // for döngüsü gibi bir etki olması için
    // if(i==6){ i++;  continue;   }
   
    cout<<i<<endl;
    //if(i==6) continue;
    i++;
  }
*/
//--------------------------------------------------------
//  goto
/*
    . herhangi bir koşul olmadan doğrudan belirlenen etikete atlanarak
    . yapısal programın akışını bozabilir, program okunurluğunu azaltır, hataları düzletirken programcı zorluk çekebilir. kullanımı tavsiye edilmez
    . ancak bazı durumlarda kullanımı kolaylık sağlayabilir

for(...) {
   for(...) {
      while(...) {
         if(...) goto sondurak;
         .
         .
         .
      }
   }
}
sondurak:
cout << "Programda bir hata oluştu.\n";

*/

//--------------------------------------------------------
  return 0;
}
