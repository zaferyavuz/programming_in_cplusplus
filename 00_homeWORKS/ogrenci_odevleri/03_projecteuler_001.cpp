//Project Euler 1. Soru (Multiples of 3 veya 5)
#include<iostream> 

using namespace std;
int main()
{ 
	int i;
	unsigned long sum;
	
	for(i=3;i<1000;i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			cout<< i <<	"   ";
			sum += i;
		}
		
	}
	 cout<< "\nToplam : "<< sum;
	
	return 0;
}
