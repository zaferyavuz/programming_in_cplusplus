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
  // Atama operatörleri (2 operand olan işlemlerde)
  //  =     +=    -=    *=    *=    %=
  //        <<=   >>=   &=    |=    ^=   

/*
  // Çeşitli Diğer Operatörler

  // sizeof
  cout << "Size of char : " << sizeof(char) << endl;

  // Koşul operatörü var=<şart>?doğruysa:değilse
  if(y < 10) { 
   var = 30;
  } 
  else {
   var = 40; 
  }
  var=(y<10)?30:40;

  // Virgül ","
  // bir dizi ifadeyi birbirinden ayırır, 
  //  her bir ifadeyi sırayla çalıştırır
  //  değer olarak en sağdaki ifadeyi geri döndürür
  int i, j;
  j = 10;
  i = (j++, j+100, 999+j); // 
  cout << i;  // ? 1010 (neden?)

  // . ve -> operatörleri
  //    .   struct ve class tipi değişkenlerin üyelerine erişmek için kullanılır
  //    ->  struct ve class tipi pointer değişkenlerin üyelerine erişmek için kullanılır.

  // Tip Dönüşüm operatörleri: (type) ifade;  -  (int)2.5;
  // Her tip için kullanılabilir,
  // Genel Kural: düşük boyuttan yüksek boyuta dönüşüm kayıpsızdır, tersi dönüşüm kayıplıdır.
  double d=2.5;
  cout<<(int)d<<endl; // kayıplı dönüşüm

  // Adres (&) ve Pointer (*) operatörleri
  int  var, *ptr, val=10;
  var = 3000;
  ptr = &var; // var ın adresi ptr ye ata
  val = *ptr; // ptr içeriğini val yap, val=var olmuş oldu, şekille gösterelim
  cout << "var :" << var << endl;
  cout << "ptr :" << ptr << endl; // *ptr dene
  cout << "val :" << val << endl;

*/   
   return 0;
}

/*
  OPERATÖR ÖNCELİKLERİ
    - yüksek önceliğe sahip işlem önce icra edilir

    Postfix 	        () [] -> . ++ - -  	                Soldan Sağa, Önce Sol 
    Unary 	          + - ! ~ ++ - - (type)* & sizeof 	  Önce en Sağ 
    Multiplicative  	* / % 	                            Soldan Sağa, Önce Sol 
    Additive  	      + - 	                              Soldan Sağa, Önce Sol 
    Shift  	          << >> 	                            Soldan Sağa, Önce Sol 
    Relational  	    < <= > >= 	                        Soldan Sağa, Önce Sol 
    Equality  	      == != 	                            Soldan Sağa, Önce Sol 
    Bitwise           AND 	& 	                          Soldan Sağa, Önce Sol 
    Bitwise           XOR 	^ 	                          Soldan Sağa, Önce Sol 
    Bitwise           OR 	| 	                            Soldan Sağa, Önce Sol 
    Logical           AND 	&& 	                          Soldan Sağa, Önce Sol 
    Logical           OR 	|| 	                            Soldan Sağa, Önce Sol 
    Conditional 	    ?: 	                                Önce en Sağ 
    Assignment 	      = += -= *= /= %=>>= <<= &= ^= |= 	  Önce en Sağ 
    Comma 	          , 	                                Soldan Sağa, Önce Sol

*/
