#include <iostream>
using namespace std;

int main () {
   int  var = 93;   
   int  *i;        

   i = &var;       

   cout << "var içeriği: ";
   cout << var << endl;

   cout << "Pointer değeri: ";
   cout << i << endl;

   cout << "Pointer içeriği: ";
   cout << *i << endl;

   return 0;
}
