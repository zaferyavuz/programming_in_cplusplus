/*
 2 türlü yapıcı fonk. vardır
  . parametresi olmayan (default)
  . parametreli

*/

#include <iostream>
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  
      // Bu fonksiyon bu sınıftan türetilen nesne ilk yaratıldığında otomatik olarak çağrılır
      // Yapıcı fonk. class ismi ile olmalıdır. 
      // Birden fazla yapıcı fonksiyon olabilir, hangisinin çalıştırılacağı parametrelere göre ayarlanır (construction overloading)
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   // nesne yaratıldığında otomatik olarak çağrılır
   cout << "Object is being created" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;
 
   // set line length
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
