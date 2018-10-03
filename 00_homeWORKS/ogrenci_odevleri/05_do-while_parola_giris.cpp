//Kullanýcýdan parola ve þifre isteyen, þifre doðru girilmediði takdirde parolayý tekrar isteyen program

#include<iostream>
using namespace std;
int main()
{
	string a;
	string b = "abc123";
	string c;
	cout<<"Kullanici Adinizi Giriniz\n"<<endl;
	cin>>c;
	cout<<"Parolanizi Giriniz\n"<<endl;
	cin>>a;
	
	if( a == b)
    cout<<"Girilen parola dogru :)) \n"<<endl;
    while(1)
    {
       	if( a != b)
        {
        cout<<"Parolayi tekrar giriniz! \n"<< endl;
        cin>>a;
        }
		if( a == b)
        {
			cout<<"Girilen parola dogru :)) \n"<<endl;
            break;
    	}
	}
	return 0;
}
