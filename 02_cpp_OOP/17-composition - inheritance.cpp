/*
	Composition in C++
	- composition "has" ilişkisi
	- inheritance "is" ilişkisi
*/

/*
#include<iostream>
#include<string>
using namespace std;

class Time
{     //Time class
public:
      Time();
      Time(int, int);
      void setTime(int, int);
      void getTime(int&, int&);
      void printTime();
      void incrementHours();
      void incrementMinutes();
private:
      int hr;
      int min;
};

class Date
{//Date class
public:
      Date();
      Date(int, int, int);
      void setDate(int, int, int);
      void getDate(int&, int&, int&);
      void printDate();
private:
      int month;
     int day;
      int year;
};

 

class Event
{//Event class
public:
      Event(int hours = 0, int minutes = 0, int m = 1,
            int d = 1, int y = 1900, string name = "Christmas"); 
      void setEventData(int hours, int minutes, int m, int d, int y, string name);
     void printEventData();
private:
      string eventName;
      Time eventTime;
      Date eventDay;
};

int main()
{//instantiate an object and set data for Christmas
      Event object;
      object.setEventData(6, 0, 12, 25, 2010, "Christmas");
      //print out the data for object
      object.printEventData();
      //instantiate the second object and set date for the fourth of July
      Event object2;
      object2.setEventData(1, 15, 7, 4, 2010, "Fourth of July");
      //print out the data for the second object
      object2.printEventData();
      return 0;
}

Time::Time()
{     //default constructor
      hr = 0;
      min = 0;
}
 
Time::Time(int hours, int minutes)
{     //class time constructor that accepts parameters
      if(0 <= hours && hours < 24)//makes sure hours are valid
            hr = hours;
      else
          hr = 0;
      if(0 <= minutes && minutes < 60)//makes sure minutes are valid
            min = minutes;
      else
            min = 0;
}
void Time::setTime(int hours, int minutes)
{     //sets a valid time
      if(0 <= hours && hours < 24)
            hr = hours;
      else
            hr = 0;
      if(0 <= minutes && minutes < 60)
            min = minutes;
      else
            min = 0;
}

void Time::getTime(int& hours, int& minutes)
{    
//returns the hours and minutes
      hr = hours;
      min = minutes;
} 

void Time::printTime()
{    
//displays the hours and minutes to the screen
      if(hr < 10)
            cout << "0";
      cout << hr << ":";
      if(min < 10)
            cout << "0";
      cout << min << endl;
}
void Time::incrementHours()
{     //increments hours by one
      hr++;
      if(hr > 23)
            hr = 0;
}
void Time::incrementMinutes()
{     //increments minutes by one
      min++;
      if(min > 59)
      {
            min = 0;
            incrementHours();
      }
}

Date::Date()
{//default constructor
      month = 1;
      day = 1;
      year = 1900;
}

Date::Date(int m, int d, int y)
{//constructor that accepts parameters
      if(m >= 1 && m <= 12)//makes sure month is valid
            month = m;
      else
            month = 1;
      if(d >= 1 && d <= 31)//makes sure day is valid
            day = d;
      else
            day = 1;
      if(y >= 1900 && y <= 2030)//makes sure year is valid
            year = y;
      else
            year = 1900;
}
void Date::setDate(int m, int d, int y)
{//sets a valid date
      if(m >= 1 && m <= 12)
            month = m;
      else
            month = 1;
      if(d >= 1 && d <= 31)
            day = d;
      else
            day = 1;
      if(y >= 1900 && y <= 2030)
            year = y;
      else
            year = 1900;
}

void Date::getDate(int& m, int& d, int& y)
{//returns the month, day and year
      month = m;
      day = d;
      year = y;
}

void Date::printDate()
{//displays the month, day and year to the screen
      if(month < 10)
            cout << "0";
      cout << month << "/";
      if(day < 10)
            cout << "0";
      cout << day << "/";
      cout << year;
}

Event::Event(int hours, int minutes, int m, int d, int y, string name)
                   : eventTime(hours, minutes), eventDay(m, d, y)
{
      eventName = name;
}

void Event::setEventData(int hours, int minutes, int m, int d, int y, string name)
{
      eventTime.setTime(hours, minutes);
      eventDay.setDate(m, d, y);
      eventName = name;
}
void Event::printEventData()
{
      cout << eventName << " occurs ";
      eventDay.printDate();
      cout << " at ";
      eventTime.printTime();
      cout << endl;
}
// composition sonu
*/

// ===============================================================================================================
/*
	- miras, OOP programlama için önemli bir kavramdır, 
		* yeniden kullanılabilir kod yazmak ya da kodun bakımını yapmakta (kod değişikliğinde) büyük kolaylık sağlar, 
		* örn; kişi sınıfından oğrenci ve öğremetmen sınıfı miras alsın, kod kişi davranışı ile ilgili bir bakım gerektirse sadece kişi sınıfı değiştirilir, böylece öğrenci ve öğretmen bundan otomatik etkilenir, bunun tersi olsaydı, yani öğrenci ve öğretmen sınıfı ayrı yazılsaydı her 2 sınıf da değiştirilmek zorunda kalınacaktı (burada modelleme de önemli)
		* bir kere kişi sınıfı tanımlandığında öğrenci sınıfı için kişi özellikleri (ad, soyad vb.) yeniden tanımlanmak zorunda değil
	- miras alınan -> base class, kişi
	- miras alan -> derived class, öğrenci, öğretmen
	- miras ilişkisi bir "is a" ilişkisidir, "yani öğrenci 'is a' person"
	- başka bir örnek: mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on.
		* animal < mammal < dog vb...
	- miras kavramına gerçek hayattan örnekler veriniz (bit.ly/dr-zafer)
	
	base-derived class tanımlama
		class "derived-class" [public|protected|private] "based-class"
	
*/
//----------------------------------------------
/*
#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
*/
//---------------------------
/*
çıktı
	Total area: 35

*/
//-------------------------------------------------------------------------------
/*
	parametrelere ilk değer atama
	base class'ın parametreli yapıcı fonksiyonunu çağırma
	çoklu miras
*/

/*
#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      Shape(){  width = 2;   height = 2;  }
      //Shape():width(5),height(5){ }

     // Shape(int width,int height){this->width=width; this->height=height;}
      Shape(int width,int height):width(width),height(height){}

      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      Rectangle(){}
      Rectangle(int h,int w):Shape(h,w){ }
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect(10,10); 
  // Rect.setWidth(5);
  // Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}

*/

//=================================================================================
/*
		Access Control and Inheritance
		- derived class base class'ın private olmayan tüm üyeşerine erişebilir.
		- derived class aşağıdaki üyeler hariç tüm methodları miras alır
			* constructor, destructor, copy constructor
			* overloaded operators
			* friend functions
			
		Miras Türleri
		- public:
			* sıklıkla kullanılır,
			* üyelere erişim şu şekilde olur
				- public 	> public
				- protected > protected
				- private	> asla erişilemez
		- protected:
			* üyelere erişim şu şekilde olur
				- public	> protected
				- protected > pretected
				- private	> asla erişilemez
		- private:
			* üyelere erişim şu şekilde olur
				- public	> private
				- protected > private
				- private	> asla erişilemez
		- protected
		- private
*/

//==============================================================
/*
// 	MULTIPLE INHERITANCE
	- şu ana kadar görülen "single inheritance", yani tek bir sınıftan bir kez miraz alınıyor
	- şimdi birden çok sınıftan miras alınması durumuna bakalım:
	- bir sınıf birden çok başka sınıftan miras alabilr,
	- her bir sınıftan miras alma yöntemi farklı olabilir
	- miras alırken virgül ile ayrım yapılır
	
	- base class üye fonksiyonları çakıştığında belirsizlik oluşabilir !!!!!

*/

/*
#include <iostream>
 
using namespace std;

// Base class Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;

   return 0;
}
*/

/*
Çıktı:
Total area: 35
Total paint cost: $2450
*/

//==========================================================================
/*
	Çok Seviyeli Miras
	- bir sınıf başka bir türetilmiş sınıftan miras alıyor
	- Derived Class >> Base Class 1 >> Base Class 2
	ya da
	- Base Class 1
		- Base Class 2
			- Derived Class
	- aşağıda bir örnek var
	
	Örnek: C++ Stream Classes (ağaç şeklinde çizilebilir)
	- ios
		- istream (cin)
			- ifstream
			- istringstream
			- iostream
		- ostream (cout,cerr,clog)
			- ofstream
			- ostringstream
			- iostream (hem istreamden hem de ostreamden miras alıyor)
		
	
*/

/*

// C++ program to implement  
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler: public Vehicle 
{  public: 
    fourWheeler() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
// sub class derived from two base classes 
class Car: public fourWheeler{ 
   public: 
     car() 
     { 
       cout<<"Car has 4 Wheels"<<endl; 
     } 
}; 
  
// main function 
int main() 
{    
    //creating object of sub class will 
    //invoke the constructor of base classes 
    Car obj; 
    return 0; 
} 


*/
//================================================================================================
/*
	Çoklu Miras Durumunda Belirsizlik
		- base class ların her ikisi de aynı fonksiyona sahipse bu durumda hangisinin çağırılacağı belirsiz olduğu için hata olur

class base1
{
  public:
     void someFunction( )
     { .... ... .... }  
};
class base2
{
    void someFunction( )
     { .... ... .... } 
};
class derived : public base1, public base2
{
    
};

int main()
{
    derived obj;
    obj.someFunction() // Error!  
}

!!!!!!!!!!!!!!!!!!!!!!! bu problem şu şekilde aşılır !!!!!!!!!!!!!!!!!!!!!!!!

int main()
{
    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}


	
*/

//===============================================================================
/*
	Hiyerarşik Miras
		- birden fazla türetilmiş sınıf aynı sınıftan türetiliyorsa hiyerarşik miras olur
		- base class
			- first_derived class
			- second_derived_class
			- third_derived_class
		
class base_class {
     ... .. ...
}

class first_derived_class: public base_class {
     ... .. ...
}

class second_derived_class: public base_class {
     ... .. ...
}

class third_derived_class: public base_class {
     ... .. ...
}
*/
