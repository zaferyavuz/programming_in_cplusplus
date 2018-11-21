/*
	* operatörü = içerik erişimi için
	& operatörü = adres operatörü
	
		int *p;			// bellek organizasyonunu gösterelim
		int sayi;
		sayi = 78;
		p = &num;
		*p = 24;		// 78 değerinin üzerine 24 yazılır
	
	benzer durum class, struct için de geçerlidir.
	. operatörü, class elamanlarına erişim için
	-> operatörü class pointer elemanlarına erişim için kullanılır
	
	struct studentType
	{
		char name[26];
		double gpa;
		int ssn;
		char grade;
	};

	studentType    student;
	studentType*   studentPtr;
	studentPtr = &student;
	
	student.gpa = 3.9;  
	(*studentPtr).gpa = 3.9;	// bu iki satır aynı işlevi görür
	
INITIALIZING POINTER VARIABLES
	p = NULL;
	p = 0;

DYNAMIC VARIABLES
	new, delete

	new dataType;   	     	//to allocate a single variable
	new dataType[intExp]; 		//to allocate an array of variables
	
	new int;
	new double[20];
	new Box();
	new Box[20];
	
örnekler	(bellek organizasyonunu çizelim)
	int  *p;		//p is a pointer of the type int
	char *name;		//name is a pointer of the type char
	string *str;	//str is a pointer of the type string

	p = new int; 	
	*p = 28;		//stores 28 in the allocated memory

	name = new char[5];	
	strcpy(name, "John");  	//stores John in name

	str = new string;	//allocates memory of the type string
					//and stores the address of the 
					//allocated memory in str
	*str = "Sunny Day";	//stores the string "Sunny Day" in 
						  //memory pointed to by str

//---------------------------------------------------------

delete pointer;    //to destroy a single dynamic variable
delete [] pointer; //to destroy a dynamically created 
				      //array
//-----------------------------------------------------
DYNAMIC ARRAYS
	int *p;
	p = new int[10];
	p++;
	*p = 35;
	
	// 2D array
	int** a = new int*[rowCount];
	for(int i = 0; i < rowCount; ++i)
    	a[i] = new int[colCount];
	
	// bellekten silinmesi
	for(int i = 0; i < sizeY; ++i) {
    	delete [] ary[i];
	}
	delete [] ary;
//----------------------------------------------------------
GERİ DÖNÜŞ DEĞERİ POINTER OLAN FONKSIYONLAR
	int* testExp(...)
	{
		.
		.
		.
	}
//-------------------------------------------------------
SHALLOW VERSUS DEEP COPY AND POINTERS
	shallow copy: 	sadece adresler kopyalanıyorsa shallow copy
	deep copy:		içerik de birebir kopyalanıyorsa
	= operatörü
		nesne değişkenleri pointer değilse = ile deep copy yapılıyor
		pointer ise = ile shallow copy yapılıyor
	nesne kopyalama yapmak için kullanlan copy constructor konusu daha önce anlatılmıştı.
//---------------------------------------------------------
CLASSES AND POINTERS: SOME PECULIARITIES
	yapıcı fonksiyonda:	new
	yıkıcı fonksiyonda: delete yapılması genel kabul gören bir görüştür.
//---------------------------------------------------------
DAHA ÖNCE TANIMLANAN BOX SINIFI İÇİN
	
	// pointer dizi ilişkisi	
	//	Box *bx1ptr = new Box[20];
	//  cout<<bx1ptr->Volume();  // ilk elemana erişiyor, pointer olarak
	//	cout<<bx1ptr[1].Volume(); // 1. elemana erişiyor, o artık bir pointer değil direk nesneyi işaret ediyor
	//  cout<<(bx1ptr+5)->Volume();		// 5 eleman sonrasına erişiliyor	
	
	//	Box b2 = *(bx1ptr+4); 		// 4 indisli içerik b2 ye kopyalanıyor
	// 	cout<<b2.Volume();

*/
//**********************************************************************
/*
// THE ADDRESS OF OPERATOR AND CLASSES
// bellek değişimlerini şematik olarak çizelim
//----------------------------------------------
//header file testadd.h
#ifndef H_testAdd
#define H_testAdd

class testAddress
{
public:
    void setX(int);
    void printX() const;
    int& addressOfX();   //this function returns the 
                    //address of the private data member

private:
    int x;
};

#endif
//-----------------------------------------------------------------------
//Implementation file testAdd.cpp
#include <iostream>
#include "testAdd.h"
using namespace std;

void testAddress::setX(int inX)
{
	x = inX;
}

void testAddress::printX() const
{
	cout<<x;
}

int& testAddress::addressOfX()
{ 
   return x;
} 
//----------------------------------------------------------------
//Test program
#include <iostream>
#include "testAdd.h"
using namespace std;

int main()
{
	testAddress a;
	int &y = a.addressOfX();

	a.setX(50);
	cout<<"x in class testAddress = ";
	a.printX();
	cout<<endl;

	y = 25;
	cout<<"After y = 25, x in class testAddress = ";
	a.printX();
	cout<<endl;

	return 0;
}


*/

