#include <iostream>
using namespace std;

struct studentType
	{
		char name[26];
		double gpa;
		int ssn;
		char grade;
	};

int main(){
    studentType    student;
	studentType*   studentPtr;
	studentPtr = &student;
	
	student.gpa = 3.9;  
	(*studentPtr).gpa = 3.9;	// bu iki satır aynı işlevi görür
  studentPtr->gpa = 3.8;

  cout<<&student.gpa<<endl;
  cout<<(*studentPtr).gpa<<endl;
  cout<<&student<<endl;
  cout<<&studentPtr<<endl;
  return 0;
}

/*
Çıktı
0x7ffe41e144b0
3.8
0x7ffe41e14490
0x7ffe41e14488

*/
