/*
PloyMorphizm
	* çok biçimlilik anlamı vardır
	* miras ile yakından ilişkilidir
	* şu şekilde bir miras sınıf hiyerarşisi olsun
		- base-class
			- derived-class1
			- derived-class2
	* base-class türünden bir pointer, derived-class1 ve derived-class2 sınıflarını adresleyebilir
	* böylece aynı kod farklı fonksiyonların çalıştırılmasını sağlayabilir
	* binding işlemi run-time binding olur, hangi fonksiyonun çağrılacağı koşma zamanında belli olur
*/

/*
#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
   
   return 0;
}
*/
//************************************************************************************************
/*
	Virtual Functions (Sanal Fonksiyonlar)
		* sanal fonksiyonlar görünüşte var olup gerçekte olmayan fonksiyonlardır.
		* Gerçekte bir gözdesi olmayan fonksiyonlardır
		* miras kavramında, base class'te sanal bir fonksiyon tanımlanır ve derived class'ta bu fonksiyon aşırı yüklenir
		* daha sonra base class türünde bir pointer ile derived class fonksiyonları çağrılır (polimorfizm)
		
		* sanal fonksiyonlar miras durumunda hangi fonksiyonun çağrılacağını garanti eder. pointer neyi gösteriyorsa onun fonksiyonu kullanılır
		* runtime polimorfizm gerçekleştirmek için kullanılır.
			- hangi fonksiyonun çağrılacağı koşma zamanında belli olur. (run-time binding | dynamic binding | late-binding)
			- <hangi fonksiyonun çağrılacağı derleme zamanında belirli ise compile-time binding | static binding | early-binding> <binding=bağlama, birleştirme>
		* virtual anahtar kelimesi ile kullanılır.	
		
	KURALLAR
		* sanal fonksiyonlar puplic alanda tanımlanmalıdırlar
		* sanal fonksiyonlar static ya da friend olamazlar
		* run-time polimorfizm için sanal fonksiyonlar, base class ın pointer ı ile çağrılmalıdırlar.
		* base class ve derived class taki sanal fonksiyonların prototipleri (parametre sayıları, türleri) aynı olmak zorundadır
		* Her zaman temel sınıfta tanımlanırlar ve türetilmiş sınıfta geçersiz kılınırlar. 
		* Türetilmiş sınıfın geçersiz kılınması (veya sanal işlevi yeniden tanımlaması) zorunlu değildir, bu durumda fonksiyonun temel sınıfı kullanılır.
		* Bir sınıf sanal yıkıcıya sahip olabilir, ancak sanal bir kurucu olamaz.	
*/
//---------------------------------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;
class dortgen
{
    public:
      virtual int alan(int taban, int yukseklik){
        return taban*yukseklik;
      }
      int cevre(int taban, int yukseklik){
        return 2*(taban+yukseklik);
      }
};

class ucgen : public dortgen
{
    public:
      int alan(int taban, int yukseklik){
        return (taban*yukseklik)/2;
      }

};

int main()
{
    dortgen *ptr; // ptr temel sınıfa ait bir pointer
    ucgen nesne1;   //nesne1'de türemiş sınıfa ait bir nesne

  ptr = &nesne1; // Temel sınıfa ait bir pointera türemiş sınıfın adresini atayabiliriz
  cout<<ptr->alan(3,4)<<endl;   // Ekranda hangi şeklin alanı hesaplandı ? 
  // alan() fonksiyonu virtual tanımlandığı için türemiş sınıfın fonksiyonu çağrıldı.
  // alan() fonk. virtual olmasaydı, dortgen sınıfının alan() fonk. çağrılırdı - DENE!

return 0;
}
*/
//-------------------------------------------------------------------------
/*
	
	pure virtual function
		* temel sınıfta tanımlanır
		* temel sınıfta tanımlı herhangi bir işlevi yoktur, sadece fonksiyonun prototipi tanımlıdır
		* virtual type func-name(parameters...)=0;  şeklinde tanımlanır.
		* her türetilmiş sınıfta bu fonksiyon tanımlanmak zorundadır.
	abstract class,
		* bir sınıf en az 1 adet  saf sanal fonk. varsa o sınıf soyut sınıf olarak bilinir
	
		// An abstract class 
		class Test 
		{    
		    // Data members of class 
		public: 
		    // Pure Virtual Function 
		    virtual void show() = 0; 

		   // Other members ...

	abstract (soyut) class özellikleri
		1. En az bir saf sanal fonk. varsa, bu sınıf soyutdur.
		2. soyut sınıf tipinde pointer ve referanslar tanımlanabilir.
		3. türeyen sınıfta temel sınıftaki fonk.nu aşırı yüklemezsek o halde türetilen sınıf da soyut olur
		4. soyut sınıfın yapıcı fonksiyonları olabilir.
		
}; 	
	
*/
//--------------------------------------------------------------------------------------
/*
	virtual destractor
	
	
*/
/*  sanal yakıcı fonk. YOK
#include<iostream> 
  
using namespace std; 
  
class base { 
  public: 
    base()      
    { cout<<"Constructing base \n"; } 
    ~base() 
    { cout<<"Destructing base \n"; }      
}; 
  
class derived: public base { 
  public: 
    derived()      
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
  
int main(void) 
{ 
  derived *d = new derived();   
  base *b = d; 
  delete b;  
  return 0; 
} 
*/
/*  çıktı (derleyiciden derleyiciye fark edebilir)
Constructing base 
Constructing derived 
Destructing base 
*/

/*
// sanal yakıcı fonk. kullanılıyor
// türetilmiş sınıfın yıkıcı fonk. nun çağrılması garanti ediliyor
#include<iostream> 
  
using namespace std; 
  
class base { 
  public: 
    base()      
    { cout<<"Constructing base \n"; } 
    virtual ~base() 
    { cout<<"Destructing base \n"; }      
}; 
  
class derived: public base { 
  public: 
    derived()      
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
  
int main(void) 
{ 
  derived *d = new derived();   
  base *b = d; 
  delete b;  
  return 0; 
} 
*/
/*  çıktı
Constructing base 
Constructing derived 
Destructing derived 
Destructing base 
*/
