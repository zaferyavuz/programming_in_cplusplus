#include <iostream>
using namespace std;
/*
    friend function.
      . private ve protected üye ve fonk. lara class dışından erişilemez, ancak bazen erişilmesi gerekebilir.
      . bu durumda tanımı class dışında yapılmak üzere friend function tanımlamak gerekir.
      . fonksiyon prototipi class içerisinde tanımların.
      . fonksiyon tanımı (içeriği) class dışında yapılır (sıradan bir fonksiyon)
      . friend function üye bir method değildir. sadece private ve protected değişkenlere erişim için kullanılır.
      . "friend" anahtar kelimesi ile tanımlanırlar
      . genelde nesneyi argüman olarak alırlar.

      DİKKAT: 
        Bu dosyada parametre - arguman farkına değinilmektedir.
*/
//-------------------------------------------------------------
class Box {
   double width;
   
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;

   // box: parameter
}
 
// Main function for the program
int main() {
   Box box;
 
   // set box width without member function
   box.setWidth(10.0);  // 10.0 : argument
   
   // Use friend function to print the wdith.
   printWidth( box );
 
   return 0;
}
