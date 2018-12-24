/*
	PAIR
		#include <utility> // pair kullanımı için
		temel veri tipinde 2 değer tutmak için tanımlanır
		ilk değer olarak;
			sayı içeren değerler, 0
			karakter içerenler, NULL olarak ayarlanır
*/

/*
#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
    pair <int, char> PAIR1[10] ; 
	pair <string, char> PAIR2 ;
  
    PAIR1[0].first = 100; 
    PAIR1[0].second = 'G' ; 
  
    cout << PAIR1[0].first << " " ; 
    cout << PAIR1[0].second << endl ; 
	
	cout << PAIR2.first ;  //it prints nothing i.e NULL 
    cout << PAIR2.second ; //it prints nothing i.e NULL 
  
    return 0; 
} 
*/

//*******************************************************************************
/*
	VECTOR
		dinamik dizi, 
		dizinin boyutu eleman sayısına göre otomatik ayarlanır
		
		push_back()	: dizinin sonuna eleman ekler
		size()		: dizide bulunan eleman sayısını verir
		operator[]	: belli indisteki elemana erişim için kullanılır
		swap()		: v1.swap(v2); v1 ile v2 nin eleman değerleri yer değiştirir
		empty()		: dizi boşsa true geri döndürür
		back()		: son elemanın değerini döndürür, son elemanı silmez
		pop_back()	: son elemanın değerini geri döndürür, son elemanı siler
		insert(i,x)	: i. indise x değerini ekler, diğer elemanları kaydırır
		erase(i)	: i. elamanı siler, diğer elemanları kaydırır
		
Iterators

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

*/

/*
// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
}
*/
//********************************************************************************************
/*
	list
		bellekte ardarda yer almayan bir yapıdır
		vector den avantajı ekleme silme daha kolay yapılır
		
		push_front(x)	: x değerini listenin önüne ekler
		front()			: listenin başındaki elemanı okur, silmez
		pop_front()		: listenin başındaki elemanı geri döndürür, x elemanını siler
		push_back(x)
		pop_back()
		back()
		
		insert(), erase() : listeye elaman ekleme ve silme (iterator kullanımı gerektirir)
		
*/


/*
#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> gqlist1, gqlist2; 
  
  
    for (int i = 0; i < 10; ++i) 
    { 
        gqlist1.push_back(i * 2); 
        gqlist2.push_front(i * 3); 
    } 
    cout << "\nList 1 (gqlist1) is : "; 
    showlist(gqlist1); 
  
    cout << "\nList 2 (gqlist2) is : "; 
    showlist(gqlist2); 
  
    cout << "\ngqlist1.front() : " << gqlist1.front(); 
    cout << "\ngqlist1.back() : " << gqlist1.back(); 
  
    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front(); 
    showlist(gqlist1); 
  
    cout << "\ngqlist2.pop_back() : "; 
    gqlist2.pop_back(); 
    showlist(gqlist2); 
  
    cout << "\ngqlist1.reverse() : "; 
    gqlist1.reverse(); 
    showlist(gqlist1); 
  
    cout << "\ngqlist2.sort(): "; 
    gqlist2.sort(); 
    showlist(gqlist2); 
  
    return 0; 
  
} 
*/
//*********************************************************************************************
/*
Sequence Containers:  implement data structures which can be accessed in a sequential manner.
	vector
	list
	deque
	arrays
	forward_list( Introduced in C++11)
Container Adaptors :  provide a different interface for sequential containers.
	queue
	priority_queue
	stack
Associative Containers :  implement sorted data structures that can be quickly searched (O(log n) complexity).
	set
	multiset
	map
	multimap	
*/	
