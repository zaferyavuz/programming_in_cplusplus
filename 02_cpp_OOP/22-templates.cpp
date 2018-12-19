#include <iostream>
using namespace std;
/*
  - jenerik (yani türden bağımsız) programlama yapmak için kullanılır.
  - template kullanılmasa idi o halde her tür için fonk. ya da sınıfı aşırı yükleyecktik.
  - template anahtar kelimesi kullanılır
  template <typename|class "tür_belirteci",....>
  ....
  - "tür belirtici" kelimesini bundan böyle tip yerine kullanabiliriz.
  - derleyici koşma ya da derleme zamanında ilgili türü yerine koyarak çalıştırılabilir kod üretir.
  - yukarıdaki tür belirteci artık tip ya da sınıf türü olabilir. 
*/


template <typename T, typename T1> T isEqual(T a,T1 b){
  if(a==b) return true;
  return false;
}

template <class T> class Complex {
  public:
    Complex(T x=0,T y=0){
      this->x = x;
      this->y = y;
    }
    string toString(){
      string s1,s2;
      s1 = " + ";
      s2 = "i";
      return to_string(x) + s1 + to_string(y) + s2;
    }

  private:
    T x;
    T y;
};
int main() {
  Complex<float> a(10.0,5);
  Complex<int> a1(10,5);
  cout<<a.toString()<<endl;
  cout<<a1.toString()<<endl;
  cout << "Hello World!\n"<<isEqual(5.0, 5);
  return 0;
}

//---------------------------------------------------------------------------------------

/*
	Function Template: Finding max element
*/
/*
#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) { 
   return a < b ? b:a; 
}

int main () {
   int i = 39;
   int j = 20;
   cout << "Max(i, j): " << Max(i, j) << endl; 

   double f1 = 13.5; 
   double f2 = 20.7; 
   cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

   string s1 = "Hello"; 
   string s2 = "World"; 
   cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

   return 0;
}
*/
//--------------------------------------------------------------------
/*
Class Template
*/
/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack { 
   private: 
      vector<T> elems;    // elements 

   public: 
      void push(T const&);  // push element 
      void pop();               // pop element 
      T top() const;            // return top element 
      
      bool empty() const {      // return true if empty.
         return elems.empty(); 
      } 
}; 

template <class T>
void Stack<T>::push (T const& elem) { 
   // append copy of passed element 
   elems.push_back(elem);    
} 

template <class T>
void Stack<T>::pop () { 
   if (elems.empty()) { 
      throw out_of_range("Stack<>::pop(): empty stack"); 
   }
   
   // remove last element 
   elems.pop_back();         
} 

template <class T>
T Stack<T>::top () const { 
   if (elems.empty()) { 
      throw out_of_range("Stack<>::top(): empty stack"); 
   }
   
   // return copy of last element 
   return elems.back();      
} 

int main() { 
   try {
      Stack<int>         intStack;  // stack of ints 
      Stack<string> stringStack;    // stack of strings 

      // manipulate int stack 
      intStack.push(7); 
      cout << intStack.top() <<endl; 

      // manipulate string stack 
      stringStack.push("hello"); 
      cout << stringStack.top() << std::endl; 
      stringStack.pop(); 
      stringStack.pop(); 
   } catch (exception const& ex) { 
      cerr << "Exception: " << ex.what() <<endl; 
      return -1;
   } 
} 
*/
