#include <iostream>
using namespace std;
 
int main() {
   
   // Aritmetik operatörler
   int a1 = 21, b1 = 10;
   cout << a1+b1 << endl ;
   // + - * / % ++ --
   

/*
  // Relational (İlişkisel) Operatörler (Şart ifadelerinde kullanılır) - sonucu mantıksal dır
  int a=20,b=10;
  if(a==b){
    cout<<"Şart sağlandı";
  }
  else{
    cout<<"Şart sağlanmadı";
  }
  // ==, !=, <, >, <=, >=, 
*/

/*
  // Mantıksal (Logic) Operatörler
  // &&, ||, !
  int a=1; // bool a=true;
  int b=0; // bool b=false;
  int x=5,y=9;
  if (a && b){ // (x<y || x==3)
    cout<< a&&b <<endl;
  } 
*/

/*
  // Bitwise Operator (And Or, xor)
  // &, |, ^, ~, <<, >>
    unsigned int a = 60;	  // 60 = 0011 1100  
    unsigned int b = 13;	  // 13 = 0000 1101
   
    cout<< (a & b) <<endl;             // 12 = 0000 1100
    cout<< (a | b) <<endl;             // 61 = 0011 1101
    cout<< (a ^ b) <<endl;             // 49 = 0011 0001
    cout<< signed(~a) <<endl;          // -61 = 1100 0011
    cout<< (a << 2) <<endl;            // 240 = 1111 0000
    cout<< (a >> 2) <<endl;            // 15 = 0000 1111
*/
   return 0;
}
