#include <iostream>
using namespace std;
/*
    Copy Constructor - Kopya Yapıcı
      Nesne kopayalama 2 şekilde yapılır. 
        1) shallow copy: sadece adresler kopyalanır, 
        2) deep copy: buradaiçerik değişkenler de kopyalanır. böylece adreste 2 farklı nesne olmuş olur.

      . Kopyalama işleminin nasıl tanımlanacağı kullanıcı tarafından tanımlanırken kullanılır.


      DİKKAT:
        Bu dosyada getter(), setter() fonksiyon kullanımı mevcuttur.  
*/
//-------------------------------------------------------------
class Point 
{ 
  private: 
    int x, y; 
  public: 
      Point(int x1, int y1) { 
        x = x1; 
        y = y1; 
      } 
    
      // Copy constructor 
      Point(const Point &p2) {
        x = p2.x; // kopyalarken değişiklik yapılabilir
        y = p2.y; 
      } 
    
    /*
        bu şekilde her bir private üye için getter() ve setter() fonksiyonlar yazılabilir.
    */
      int getX(){  
        return x; 
      } 
      int getY(){  
        return y; 
      } 
     /*
          fonksiyonlar dışarıda tanımlanmak yerine "inline" olarak class içerisinde tanımlanabilir.
     */ 
}; 

int main() {
  
    Point p1(10, 15); // Normal constructor
    Point p2 = p1; // Copy constructor çağrılıyor, normalde hiç copy const. fonksiyonu implement edilmede olurdu ancak birebir eşitlemenin dışında bir iş yapılacaksa ayrıca implement edilmesi gerekir
  
     
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY()<<endl; 
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY()<<endl; 

    cout<<&p1<<endl;
    cout<<&p2;

  return 0;
}
