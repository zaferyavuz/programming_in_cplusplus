//Project Euler 3. soru (Largest prime factor)
#include<iostream>
#include <cmath>

using namespace std;

bool asal_mi(long double);

int main()
{
	long double n = 600851475143;
	long double m=2;
	
	for(m=2;m<=n;m++)
	{
	
		if(asal_mi(m))

	
	 		 if(fmod(n,m) == 0)
	 		 {
			
			  n = n/m;
             
             }
    
    	
   }
   cout<<"Asal boleni : "<< m-1 << endl;
	return 0;
}

bool asal_mi(long double x)
{

    for(long double i = 2;i<=x/2;i++)
	{
		if(fmod(x,i) == 0)
		  return 0;
	}		
	return 1;
}

