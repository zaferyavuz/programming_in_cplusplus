#include <iostream>
using namespace std;
/*
    FONKSİYONLAR
      . Birbiriyle ilgili bir grup işi yerine getiren ifadeler topluluğudur
      . Her C++ programı en az bir fonksiyon içerir, main()
      . main() dışında tanımlanan fonksiyonlar kullanıcı tanımlı fonksşyonlardır.
      . Bun un dışında hazır kullanılan fonksiyonlar da bulunmaktadır
        strcat(), memcopy(), 
        c'den bildiğiniz printf(), scanf() ...
      . Bir fonksiyon bildirim (declaration) ve tanım (definition) olmak üzere iki kısımdan oluşur
        bildirim (declaration)
          - fonksiyon ismi:
              kullanıcı tanımlı, değişken isimlendirme kurallarına göre tanımlanır, mutlaka bir fonksiyonun ismi belirtilmelidir
          - geri dönüş tipi:
              veri tiplerinden biri olmalıdır, geri dönüş değeri yoksa "void" kullanılmalıdır
          - paramtreler ve tipleri, sayısı ve tipleri belirtilir, birden çok parametre virgül ile ayrılır, paramtresi olmayan fonksiyonlar olabilir
        tanım (definition)
          - fonksiyonun ana gövdesi
          - fonksiyonun yapacağı işin kodlarını içerir

        return_type function_name(parameters) {
          ...
          body of function
          ...
        }

      . Fonksiyon kullanılmadan önce bildirilmelidir (declare)
      . Amaç fonksiyonun nasıl çağrılması gerektiğini derleyiciye anlatmaktır.
      . Eğer kullanmadan önce fonksiyonun tanımı yazılmışsa declerasyona gerek yoktur.

      Örnek 1: önce deklerasyon, sonra çağırma, en son tanım
        int topla(int,int);     // deklerasyon
        ...
        int main(){
          ...
          a=topla(5,6);         // fonksiyon çağırma
          ...
        }
        // fonksiyon tanımı
        int topla(int a,int b){
          ...
        }


      Örnek 2: önce tanım, sonra çağırma
        // fonksiyon tanımı
        int topla(int a,int b){
          ...
        }
        int main(){
          ...
          a=topla(5,6);         // fonksiyon çağırma
          ...
        }

      . FONKSİYON PARAMETRELERİ
          - fonksiyon isiminden sonra virgül ile ayrılarak () içerisinde tanımlanırlar
          - bu şekilde tanımlanan parametreler "formal değişken" olarak adlandırılırlar
          - fonksiyon içerisinde lokal değişken gibi davranırlar
          - fonksiyon çalışması bitince ömürleri sona erer.
          - değerleri fonksiyon çağrılırken belirlenir
        
      . 3 türlü paramtre geçme (fonksiyon çağırma) yöntemi vardır
          1. call by Value
          2. call by Pointer
          3. call by reference
*/

// fonksiyon tanımı, CALL BY VALUE
int topla(int a,int b){
  return a+b;
}

// call by value örnek fonk.2
void takas_cbv(int a,int b){    
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void takas_cbp(int *a,int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
//-----------------------------------------------------------
void takas_cbr(int &a,int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}
//-------------------------------------------------------------
// default değerli parametre
int topla2(int a,int b=25,int c=5){   
  return a+b;
}
//-------------------------------------------------------------
int main() {
 /*  call by value
 //   fonksiyon çağrılırken parametreler formal değişkenlere kopyalanırlar
 //   yapısal programlama dillerinde fonksiyon çağırma yöntemleri genellikle böyledir
 //   fonksiyon içerisinde değişkenlere yapılan değişiklikler orjinallerini etkilemez (soru:neden?)

    //cout<<topla(10,12);

    int a=5,b=6;
    cout<<"Takastan Önce (a,b)=("<<a<<","<<b<<")"<<endl;
    takas_cbv(a,b);
    cout<<"Takastan Sonra (a,b)=("<<a<<","<<b<<")"<<endl;
    // fonksiyon çağrıldığında değerler nasıl geçiyor? şekil ile anlatalım
 */
//--------------------------------------------------------
// Call by Pointer
//    fonksiyon çağrılırken parametrelerin adresleri gönderilir
//    dolayısıyla değişken içerikleri direk etkilenir
//    şekil ile anlatımda bunun nasıl olduğunu görelim ....
/*
    int a=5,b=6;
    cout<<"Takastan Önce (a,b)=("<<a<<","<<b<<")"<<endl;
    takas_cbp(&a,&b);     // adresleri parametre olarak gönderiyoruz
    cout<<"Takastan Sonra (a,b)=("<<a<<","<<b<<")"<<endl;
    // fonksiyon çağrıldığında değerler nasıl geçiyor? şekil ile anlatalım
*/
//--------------------------------------------------------
// Call by Reference
//    fonksiyon çağrılırken call by value gibi çağrılırken
//    ancak fonksiyona değişkenlerin referansları kopyalanırlar
//    dolayısıyla içerikler etkilenir, çünkü değerler kopyalanmıyor, adres kopyalanıyor
/*
    int a=5,b=6;
    cout<<"Takastan Önce (a,b)=("<<a<<","<<b<<")"<<endl;
    takas_cbr(a,b);     // doğrudan fonksiyonu call by value gibi çağırıyoruz.
    cout<<"Takastan Sonra (a,b)=("<<a<<","<<b<<")"<<endl;
    // fonksiyon çağrıldığında değerler nasıl geçiyor? şekil ile anlatalım
*/
//----------------------------------------------------------
// Default değerli parametre
//    parametrelerden sonuncusuna (birden fazla olabilir) default değer verilebilir
//    eğer fonksiyonun tüm parametreleri verilmişse o değerler çağırma yöntemine göre işlem görür
//    eğer son parametre çağrılırken boş geçilirse default değer geçerli olur
//    ilk değer için default değer verilmez,

    int a=5,b=6;
    cout<<"Sonuç 1 = "<<topla2(a,b,10)<<endl;
    // 2. parametre verilmiyor, default değer alınıyor 
    cout<<"Sonuç 2 = "<<topla2(a)<<endl;

//---------------------------------------------------------------
  return 0;
}
