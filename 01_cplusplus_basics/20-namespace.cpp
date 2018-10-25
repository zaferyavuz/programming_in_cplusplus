/*
namespace anahtar kelimesi ile tanımlanır.
namespace namespace_name {
   // code declarations
}
--------------------------------------------------------
:: operatörü ile alt elemanlara erişilebilir
name::code;  // code could be variable or function.
--------------------------------------------------------
örnek:
*/
/*
#include <iostream>
//using namespace std;
// first name space
namespace first_space {
   void func() {
      std::cout << "Inside first_space" << std::endl;
   }
}
// second name space
namespace second_space {
   void func() {
      std::cout << "Inside second_space" << std::endl;
   }
}
int main () {
   // Calls function from first name space.
   using namespace first_space;
   func();
   
   // Calls function from second name space.
   func(); 
   return 0;
}
*/
/*
çıktı:
Inside first_space
Inside second_space
---------------------------------------------------------
using namespace ile seçeceğimiz ad alanıında çalışabiliriz.
*/
/*
#include <iostream>
using namespace std;
// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}
// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}
using namespace first_space;
int main () {
   // This calls function from first name space.
   func();
   
   return 0;
}
*/
/*

-------------------------------------------------------------------------
sadece obje adıni bile kullanabiliriz.
#include <iostream>
using std::cout;
int main () {
   cout << "std::endl is used with std!" << std::endl;
   
   return 0;
}
------------------------------------------------------------------------
nested namespaces
*/
/*
#include <iostream>
using namespace std;
// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
   
   // second name space
   namespace second_space {
      void func() {
         cout << "Inside second_space" << endl;
      }
   }
}
//using namespace first_space::second_space;
int main () {
   // This calls function from second name space.
   first_space::func();
   
   return 0;
}
*/
/*
------------------------------------------------------------------------
------------------------------------------------------------------------
namespace globalType
{
	  const int n = 10;
	  const double rate = 7.50;
	  int count = 0;
	  void printResult();
}
....
globalType::rate           şeklinde kullanılabilir.
void globalType::printResult() 
{
	.
	.
	.
}
--------------------------------------------------------------------------
#include <cmath>
int main()
{
   double x = 15.3;
   double y;
   y = std::pow(x,2);
   .
   .
   .
}
---------------------------------------------------------------------------
#include <iostream>
. 
.
.
int main()
{
   std::cout<<.............
   using namespace std;
   .
   .
   cout<<............
   .
}
std::cout<<......................
.
.
.
*/
