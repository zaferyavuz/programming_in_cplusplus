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
*/

// fonksiyon tanımı, 
int topla(int a,int b){
  return a+b;
}
//-----------------------------------------------------------

int main() {
// /*
    cout<<topla(10,12);
// */
//-------------------------------------------------------
// Call by Value

//--------------------------------------------------------
// Call by Reference

//--------------------------------------------------------
// Call by Pointer
  return 0;
}
