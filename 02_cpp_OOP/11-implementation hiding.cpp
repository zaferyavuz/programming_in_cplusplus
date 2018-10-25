/*
INFORMATION HIDING
Implementation file. 
Header file (Specification file).
The header file has an extension h. 
The implementation file has an extension cpp. 
The implementation file must include the header file via the include statement.
In a include statement, user defined header files are enclosed in double quotes while system provided header files are enclosed between angular brackets. 

*/

//-----------------------------------------------------------------------
//clock.h, the specification file for the class clockType

class clockType
{
  public:
      void setTime(int hours, int minutes, int seconds);
      void getTime(int& hours, int& minutes, int& seconds);
      void printTime() const;
      void incrementSeconds();
      void incrementMinutes();
      void incrementHours();
      bool equalTime(const clockType& otherClock) const;
      clockType(int hours, int minutes, int seconds);
      clockType();
  private:
      int hr;  //store hours
      int min; //store minutes
      int sec; //store seconds
};
//-------------------------------------------------------------------------
//clockImp.cpp, the implementation file
#include <iostream>
#include "clock.h"

using namespace std;
/*
  .
  .
  .
//The definition of the member functions of the clockType //goes here.
  .
  .
  .
  */
//-----------------------------------------------------------------------
//TestClock.cpp. The user program that uses the class //clockType

#include <iostream>
#include "clock.h"
using namespace std;
.
.
.
//Place the definitions of the function main and the other 
//user-defined functions here
.
.
.
//-------------------------------------------------------------------------------
/*
    deklerasyon obj.h dosyasında yapılır
    obj.h -> dosyasını include eden obj.cpp dosyasında implementasyon yapılır
    obj.h -> dosyasını include eden main dosyasında test edilir
        böylece obj.cpp dosyası hiç bir yerde include edilmeden hiding yapılır (gizlenir)
*/
