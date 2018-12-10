/*
 Fonksiyon Aşırı Yükleme
  * bir fonksiyona birden çok görev yükleme işlemine aşırı yükleme denir.
  * fokn. isimleri aynı, parametreler farklı
  * hangi fonksiyonun çağrılacağı parametrelerden belli olmaktadır.
*/

#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263);
   
   // Call print to print character
   pd.print("Hello C++");
 
   return 0;
}
/*
// Örnek 2
#include <iostream>
using namespace std;

void display(int);
void display(float);
void display(int, float);

int main() {

    int a = 5;
    float b = 5.5;

    display(a);
    display(b);
    display(a, b);

    return 0;
}

void display(int var) {
    cout << "Integer number: " << var << endl;
}

void display(float var) {
    cout << "Float number: " << var << endl;
}

void display(int var1, float var2) {
    cout << "Integer number: " << var1;
    cout << " and float number:" << var2;
}
*/
//------------------------------------------------------------------------------
/*
// Örnek 3
#include <iostream>
using namespace std;

int absolute(int);
float absolute(float);

int main() {
    int a = -5;
    float b = 5.5;
    
    cout << "Absolute value of " << a << " = " << absolute(a) << endl;
    cout << "Absolute value of " << b << " = " << absolute(b);
    return 0;
}

int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}
*/
