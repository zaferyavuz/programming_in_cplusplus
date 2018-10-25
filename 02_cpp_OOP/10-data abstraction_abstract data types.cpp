/*
Data Abstraction, Classes, and Abstract Data Types - Veri Soyutlama
  zaten var olan nesnelere davranışlar ekleyerek bir sınıf yapılıyor

The data type clockType has three data members and the following basic operations:
1. Set the time.
2. Return the time.
3. Print the time.
4. Increment the time by one second.
5. Increment the time by one minute.
6. Increment the time by one hour.
7. Compare the two times to see whether they are equal.

	Abstract Data Type (ADT): A data type that specifies the logical properties without the implementation details.
  
An ADT has three things associated with it. 
The name of the ADT, called type name. 
The set of values belonging to the ADT, called domain. 
The set of operations on the data. 

dataTypeName
   clockType
domain
	Each clockType value is a time of day in the 	form of hours, minutes, and seconds.
operations
   	Set the time.
	Return the time.
   	Print the time.
   	Increment the time by one second.
   	Increment the time by one minute.
   	Increment the time by one hour.
   	Compare the two times to see whether they 
     are equal.
*/
//-------------------------------------------------------------------------------
/*
  LİSTE ÖRNEĞİ
  A list is defined as a set of values of the same type. 
All values in a list are of the same type; a convenient way to represent and process a list is to use an array. 
You can define a list as an ADT as follows:

dataTypeName
   listType
domain
   Every element of the type listType is a set 
	  of, say 1000 numbers.
operations
       Check to see if the list is empty.
   Check to see if the list is full.
   Search the list for a given item.
   Delete an item from the list.
   Insert an item in the list.
   Sort the list.
   Destroy the list.
   Print the list.
*/

/*   
// bunu implement edelim,
class listType
{
public:
    bool isEmptyList();
    bool isFullList();
    void search(int searchItem, int& found);
    void insert(int newElement);
    void remove(int removeElement);
    void destroy();
    void printList();
    listType(); //constructor

private:
    int list[1000];
    int length;
};

*/
