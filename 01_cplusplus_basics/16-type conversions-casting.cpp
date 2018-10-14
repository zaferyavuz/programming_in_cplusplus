/*---------------------------------------
Bu içeriğe class konusu işlendikten sonra değinilecektir.
                        14.10.2018
                        Z. Yavuz
----------------------------------------*/
#include <iostream>
using namespace std;

// dynamic_cast için
class Base { virtual void dummy() {} };
class Derived: public Base { int a; };

int main() {
/*  implicit conversion
      otomatik dönüşüm yapar
      kural;
        küçük tiplerden büyük tiplere dönüşüm kayıpsız olur
        büyük tiplerden küçük tiplere dönüşüm kayıplı olur
***/
/*          
  short a=2000;
  int b;
  b=a;
  cout << "a_size: "<<sizeof(short)<<endl;
  cout << "b_size: "<<sizeof(int)<<endl;
*/

/*
  int a=20;
  cout<<a/3<<endl;

  double x=a/3.0;
  cout<<x<<endl;

  a=x;
  cout<<a<<endl;
  */

//------------------------------------------------
/****
  dynamic_cast
    sadece sınıflara pointer ve referanslarla yapılır
    amaç nesneler arasındaki dönüşümden emin olmaktır.
****/
/*
    Base * pba = new Derived;
    Base * pbb = new Base;
    Derived * pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast.\n";

    pd = dynamic_cast<Derived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast.\n"; 
*/
//-----------------------------------------

/****
  stactic_cast
    static_cast can perform conversions between pointers to related classes, not only upcasts (from pointer-to-derived to pointer-to-base), but also downcasts (from pointer-to-base to pointer-to-derived)

****/
/*
    Base * pba = new Derived;
    Base * pbb = new Base;
    Derived * pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast.\n";

    pd = static_cast<Derived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast.\n"; 
    else  cout << "Not null pointer with static_cast\n"; 
*/
/*
    int one=1,two=2;
    double z=10.02;
    one = 2 * two + static_cast<int>(z);
    cout<<one;
  */

//-----------------------------------------------------------
  /****
  reinterpret_cast
    herhangi bir türden herhangi bir türe dönüşüm yapmak için kullanılır
    işlem: binary copy şeklinde yapılır

  //   class A {  ...  };
  // class B {  ...  };
  // A * a = new A;
  // B * b = reinterpret_cast<B*>(a);
*****/
//--------------------------------------------------------------

  return 0;
}
