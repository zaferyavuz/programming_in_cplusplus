/*
Overloading Increment ++ & Decrement --
   ++, --
*/


#include <iostream>
using namespace std;
 
class Time {
   private:
      int hours;             // 0 to 23
      int minutes;           // 0 to 59
      
   public:
      Time(int h=0, int m=0) {
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
         Time T(hours, minutes);// save the orignal value 
         ++minutes;// increment this object    
         if(minutes >= 60) {
            ++hours;
            minutes -= 60;
         }
         return T; // return old original value
      }
};
// https://repl.it/repls/AcceptableComplexRegisters
int main() {
   Time T1(11, 59), T2(10,40),T3;
 
   T3=++T1;                    // increment T1
   T3.displayTime();        // display T1
 
   T3=T2++  ;                    // increment T2
   T3.displayTime();        // display T2
   T2++;                    // increment T2 again
   T2.displayTime();        // display T2
   return 0;
}
