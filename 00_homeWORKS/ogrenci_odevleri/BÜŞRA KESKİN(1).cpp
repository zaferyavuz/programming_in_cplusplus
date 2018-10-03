//Girilen sayýlarýn toplamýný, ortalama deðerini, max1-max2 ve min1-min2 deðerlerini bulan program
#include<iostream>
using namespace std; 
int main()
{
	int sayi, x, max_1, max_2, min_1, min_2, ortalama, toplam;
	
	cout<<"Kac adet sayi gireceginizi belirtiniz\n"<<endl;
	cin>> sayi;
	cout<<"Ilk sayiyi giriniz\n"<<endl;
	cin>> x;
	max_1 = x;
	min_1 = x;
	for(int i=1;i<=(sayi-1);i++)
	{
		cout<<i+1<< ". sayiyi giriniz"<<endl;
		cin>>x;
	
		if(x>max_1)
		   {
		   max_2 = max_1;
		   max_1 = x;
		   
	}
	     if(x<min_1)
	     {
	     	min_2 = min_1;
	     	min_1 = x;
		 }
		 	toplam += x;
		    ortalama = toplam/sayi;
	}
	
	    cout<<"1. maksimum sayi :"<< max_1 << endl;
	    cout<<"2. maksimum sayi :"<< max_2 << endl;
	    cout<<"1. minimum sayi :"<< min_1 << endl;
	    cout<<"2. minimum sayi :"<< min_2 << endl;
	    cout<<"Sayilarin ortalamasi :"<< ortalama << endl;
	    
	
	getchar();
	return 0;
	
	
}
