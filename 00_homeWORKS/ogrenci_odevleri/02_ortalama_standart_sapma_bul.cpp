//Girilen sayıların ortalamasını ve standart sapmasını diziler yardımıyla bulan program
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[1000], i, b, toplam = 0, ortalama = 0, x = 0;
	int standart_sapma = 0;
	
	cout<<"Kac sayi girilecek?\n"<<endl;
	cin>>i;
	cout<<"Sayilari giriniz\n"<<endl;

	for(b=0;b<=i-1;b++)
	{
		cin>>a[b];
    }
    for(b=0;b<=i-1;b++)
	{
	    toplam += a[b];   
    }
    
    ortalama = toplam/i;
    
    for(b=0;b<=i-1;b++)
	{
	    x += ((a[b]-ortalama)*(a[b]-ortalama));
    }
    	standart_sapma = sqrt(x/(i-1));
    				
        cout<<"Ortalama : "<< ortalama<<endl;
    	cout<<"Standart sapma : \n" << standart_sapma;
    
    	
    
    	
	return 0;
}

