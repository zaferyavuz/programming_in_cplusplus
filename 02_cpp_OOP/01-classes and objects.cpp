#include <iostream>

using namespace std;
/*
    class yapıları struct yapıları gibi farklı türdeki verileri bir araya getirir ancak bazı farklar vardır
      1. class yapılarında fonksiyon da kullanılıyor, böylece enkapsülasyon özelliği olmuş olur
      2. struct ta üyeler varsayılan olarak public iken class ta private dır
      
A STRUCT VERSUS A CLASS
By default the members of a struct are public.
By default the members of a class are private.
You can use the member access specifier private in a struct to make a member private.
Both C++ classes and structs have the same capabilities. 
Most programmers restrict their use of structures to adhere to their C-like structure form, and so do not use them to include member functions. 
If all of the data members of a class are public and the class has no member functions, you typically use a struct to group these members.      

      burada class herhangi bir methoda sahip değil ancak bir geçiş için örnek teşkil edebilir

*/
class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
/*
    . Box bir veri türü yani tip tir.
    . Box1 ise bir nesnedir ve genelde gerçek hayatta bir nesneye karşılık gelir
    . (doğal olarak nesnenin özellikleri (üye değişkenleri) ve bu özellikler üzerinde işlem yapan fonksiyonlar (üye fonksiyonlar=davranışlar) bulunmaktadır)
*/

/*
    . operatörü elemanlara erişim için kullanılır
    = operatörü direk nesnelerin birbirine atanmasında kullanılır (pointer olmayacak)
    DENE
        Box1 = Box2;
*/
 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
//---------------------------------------------------------------------
/*  bir başka örnek (öğrenci sınıfı da verilebilir)
class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&);
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    
    // burada class parametre olarak gönderiliyor, 
    // foksiyon çağrısında call by value, call by reference, call by pointer yöntemleri kullanılabilir
    // class türü geri dönüş değeri olabilir
    bool equalTime(const clockType& otherTime) const;

private:
    int hr;
    int min;
    int sec;
};

*/
