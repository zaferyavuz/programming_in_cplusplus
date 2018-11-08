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

//---------------------------
/*
çıktı
	Total area: 35

*/

//=================================================================================
/*
		Access Control and Inheritance
		- .......
*/
