/*
   - saat bilgilerinin toplanması için operator overloading gerekli
   - benzer şekilde
      * komplex sayı toplanması
      * saat karşılaştırma
      * alan farkı vb..
   - operator anahtar kelimesi kullanılır
   - şu operatorler aşırı yüklenemz
      .   .*   ::   ?:   sizeof
//------------------------------------------------------------   
aşırı yükleme, member funk. ya da friend func olarak tanımlanabilir
operatör AŞIRI YÜKLEME - friend funcion vs. member function
member func.
   s1 + s2 ifadesi s1.operator+(s2); haline dönüşür. 
   Bu şu demek, fonk. ilk objenin alt fonk. olarak çağrılır.
friend func.
   ancak s1 + s2 de ilk operand obje değilse problem oluşur.
   10 + s1, ya da s1 + 10 ifadeleri hata verir
   s1 + 10 ifadesi aşırı yükleme ile düzeltilebilir
   ancak yine de private elamanlara erişecek şekilde friend func. tanımlanarak problem çözülür,
   aşağıda <<, >> kısmında örnek mevcut, bakınız...
   
*/

#include <iostream>
using namespace std;

class Box {
   public:
      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;
      }
      void setHeight( double hei ) {
         height = hei;
      }
      
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
      
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
//-----------------------------------------------------------------------
/* 
Unary (Tekli) Operators Overloading in C++
   The increment (++) and decrement (--) operators.
   The unary minus (-) operator.
   The logical not (!) operator.
Kullanım şekli
   !obj, -obj, ++obj, --obj, (bazı durumlarda: obj++, obj-- kullanılabilir <postfix>)
*/

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
 
   -D1;                     // apply negation
   D1.displayDistance();    // display D1

   -D2;                     // apply negation
   D2.displayDistance();    // display D2

   return 0;
}
*/
//-----------------------------------------------------------------------------
/*
Binary Operators Overloading in C++
   * 2 arguman alır
   * +, -, /, *
*/

/*
#include <iostream>
using namespace std;
 
class Box {
   double length;      // Length of a box
   double breadth;     // Breadth of a box
   double height;      // Height of a box
   
   public:
 
   double getVolume(void) {
      return length * breadth * height;
   }
   
   void setLength( double len ) {
      length = len;
   }
 
   void setBreadth( double bre ) {
      breadth = bre;
   }
 
   void setHeight( double hei ) {
      height = hei;
   }
   
   // Overload + operator to add two Box objects.
   Box operator+(const Box& b) {
      Box box;
      box.length = this->length + b.length;
      box.breadth = this->breadth + b.breadth;
      box.height = this->height + b.height;
      return box;
   }
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // Add two object as follows:
   Box3 = Box1 + Box2;
 
   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 
   return 0;
}
*/
//--------------------------------------------------------------------
/*
Relational Operators Overloading in C++
   <, >, <=, >=, ==, etc.
*/

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
      
      // overloaded < operator
      bool operator <(const Distance& d) {
         if(feet < d.feet) {
            return true;
         }
         if(feet == d.feet && inches < d.inches) {
            return true;
         }
         
         return false;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);
 
   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
   
   return 0;
}
*/
//-------------------------------------------------------------------
/*
Input/Output Operators Overloading in C++
   <<, >>
*/

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      friend ostream &operator<<( ostream &output, const Distance &D ) { 
         output << "F : " << D.feet << " I : " << D.inches;
         return output;            
      }

      friend istream &operator>>( istream  &input, Distance &D ) { 
         input >> D.feet >> D.inches;
         return input;            
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11), D3;

   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;

   return 0;
}
*/
//---------------------------------------------------------------------------------
/*
Overloading Increment ++ & Decrement --
   ++, --
*/

/*
#include <iostream>
using namespace std;
 
class Time {
   private:
      int hours;             // 0 to 23
      int minutes;           // 0 to 59
      
   public:
      // required constructors
      Time() {
         hours = 0;
         minutes = 0;
      }
      Time(int h, int m) {
         hours = h;
         minutes = m;
      }
      
      // method to display time
      void displayTime() {
         cout << "H: " << hours << " M:" << minutes <<endl;
      }
      
      // overloaded prefix ++ operator
      Time operator++ () {
         ++minutes;          // increment this object
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         return Time(hours, minutes);
      }
      
      // overloaded postfix ++ operator
      Time operator++( int ) {
      
         // save the orignal value
         Time T(hours, minutes);
         
         // increment this object
         ++minutes;                    
         
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         
         // return old original value
         return T; 
      }
};

int main() {
   Time T1(11, 59), T2(10,40);
 
   ++T1;                    // increment T1
   T1.displayTime();        // display T1
   ++T1;                    // increment T1 again
   T1.displayTime();        // display T1
 
   T2++;                    // increment T2
   T2.displayTime();        // display T2
   T2++;                    // increment T2 again
   T2.displayTime();        // display T2
   return 0;
}
*/
//---------------------------------------------------------------------------------
/*
Assignment Operators Overloading in C++
   =
*/

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      void operator = (const Distance &D ) { 
         feet = D.feet;
         inches = D.inches;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet <<  " I:" <<  inches << endl;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);

   cout << "First Distance : "; 
   D1.displayDistance();
   cout << "Second Distance :"; 
   D2.displayDistance();

   // use assignment operator
   D1 = D2;
   cout << "First Distance :"; 
   D1.displayDistance();

   return 0;
}
*/
//---------------------------------------------------------------------
/*
Function Call Operator () Overloading in C++
   ()
*/

/*
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
      // overload function call
      Distance operator()(int a, int b, int c) {
         Distance D;
         
         // just put random calculation
         D.feet = a + c + 10;
         D.inches = b + c + 100 ;
         return D;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches << endl;
      }   
};

int main() {
   Distance D1(11, 10), D2;

   cout << "First Distance : "; 
   D1.displayDistance();

   D2 = D1(10, 10, 10); // invoke operator()
   cout << "Second Distance :"; 
   D2.displayDistance();

   return 0;
}
*/
//----------------------------------------------------------------------------------------------
/*
Subscripting [] Operator Overloading in C++
   []
*/

/*
#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay {
   private:
      int arr[SIZE];
      
   public:
      safearay() {
         register int i;
         for(i = 0; i < SIZE; i++) {
           arr[i] = i;
         }
      }
      
      int &operator[](int i) {
         if( i > SIZE ) {
            cout << "Index out of bounds" <<endl; 
            // return first element.
            return arr[0];
         }
         
         return arr[i];
      }
};

int main() {
   safearay A;

   cout << "Value of A[2] : " << A[2] <<endl;
   cout << "Value of A[5] : " << A[5]<<endl;
   cout << "Value of A[12] : " << A[12]<<endl;

   return 0;
}
*/
//---------------------------------------------------------------------------
/*
Class Member Access Operator (->) Overloading in C++
   ->
*/

/*
#include <iostream>
#include <vector>
using namespace std;

// Consider an actual class.
class Obj {
   static int i, j;
   
public:
   void f() const { cout << i++ << endl; }
   void g() const { cout << j++ << endl; }
};

// Static member definitions:
int Obj::i = 10;
int Obj::j = 12;

// Implement a container for the above class
class ObjContainer {
   vector<Obj*> a;

   public:
      void add(Obj* obj) { 
         a.push_back(obj);  // call vector's standard method.
      }
      friend class SmartPointer;
};

// implement smart pointer to access member of Obj class.
class SmartPointer {
   ObjContainer oc;
   int index;
   
   public:
      SmartPointer(ObjContainer& objc) { 
         oc = objc;
         index = 0;
      }
   
      // Return value indicates end of list:
      bool operator++() { // Prefix version 
         if(index >= oc.a.size()) return false;
         if(oc.a[++index] == 0) return false;
         return true;
      }
   
      bool operator++(int) { // Postfix version 
         return operator++();
      }
   
      // overload operator->
      Obj* operator->() const {
         if(!oc.a[index]) {
            cout << "Zero value";
            return (Obj*)0;
         }
      
         return oc.a[index];
      }
};

int main() {
   const int sz = 10;
   Obj o[sz];
   ObjContainer oc;
   
   for(int i = 0; i < sz; i++) {
      oc.add(&o[i]);
   }
   
   SmartPointer sp(oc); // Create an iterator
   do {
      sp->f(); // smart pointer call
      sp->g();
   } while(sp++);
   
   return 0;
}
*/
