#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//---------------------------------------------  
/*  stream:   bir kaynaktan hedefe doğru giden karakter dizisi
    istream:  giriş cihazından bilgisayara doğru akan karakter dizisi
    ostream:  bilgisayardan dış cihaza (ekran, dosya vs..) doğru akan karakter dizisi

    <iostream>  : istream ve ostream türünden sınıfları içeren header

  istream cin;    şeritten okur kafayı ilerletir
	ostream cout;   çıktıyı yazar, kafayı ilerletir

  örnek:
    cin>>variable>>variable...;
    cin>>payRate>>hoursWorked;

   ard arda >> opetratörü ile girdiler alınabilir, bir sonraki giriş için tüm beyaz boşluk karakterleri atlanır
   whitespace(beyaz boşluk): boşluk, tab, yeni satır('\n') gibi ayırıcı karakterleri

   cin>>ch;		girişten "AB" girildiğinde		ch='A', 'B' bir sonraki giriş için tutulur

   double z;
   cin>>z;		
   giriş: 39		sonuç: z=39.0
*/
//---------------------------------------------
/*
  // cin.get(varChar);  sıradaki karakteri (whitespace, boşluk dahil) okur
  char ch1,ch2;
  int num;
  cin.get(ch1);
  cin.get(ch2);
  cin>>num;
  // giriş: A 25
  // ch1='A';    ch2=' ';   num=25;
*/
//------------------------------------------------
/*
  // cin.ignore(intExp,chExp);    intExp sayıda karakter ya da chExp karakteri görene kadar girilen karakterleri görmezden gelir, hangi şart ilk önce sağlanırsa
  int a,b;
  //Suppose the input is:
  // 25 67 89 43 72
  // 12 78 34

  // Consider the statements:

  cin>>a;
  cin.ignore(100,'\n');
  cin>>b;
*/
  // The first statement cin>>a; stores 25 in a. 
  // The second statement, cin.ignore(100,'\n'); discards all of the remaining numbers in the first line.
  // The third statement cin>>b; stores 12 (from the next line) in b.

//-----------------------------------------------------
/*
  // cin.putback(ch);   1 karakter geri gider okur
  // ch=cin.peek();     sıradaki karakteri okur ancak ilerlemez
  char ch;

	cout<<"Line 1: Enter a string: ";		//Line 1
	cin.get(ch);					//Line 2
	cout<<endl;						//Line 3
	cout<<"Line 4: After first cin.get(ch); "
	    <<"ch = "<<ch<<endl;			//Line 4
  cin.get(ch);					//Line 5
	cout<<"Line 6: After second cin.get(ch); " 
	    <<"ch = "<<ch<<endl;			//Line 6

	cin.putback(ch);					//Line 7
	cin.get(ch);					//Line 8
	cout<<"Line 9: After putback and then " 
	    <<"cin.get(ch); ch = "<<ch<<endl;	//Line 9
	
	ch = cin.peek();					//Line 10
	cout<<"Line 11: After cin.peek(); ch = "
	    <<ch<<endl;					//Line 11
  cin.get(ch);					//Line 12
	cout<<"Line 13: After cin.get(ch); ch = "
	    <<ch<<endl;					//Line 13
*/
/************
ÇIKTI:
  Line 1: Enter a string: abcd

Line 4: After first cin.get(ch); ch = a
Line 6: After second cin.get(ch); ch = b
Line 9: After putback and then cin.get(ch); ch = b
Line 11: After cin.peek(); ch = c
Line 13: After cin.get(ch); ch = c
*/
//------------------------------------------------------------------ 
/*
  // input failure
  int a = 10;					   	//Line 1
   int b = 20;					   	//Line 2
   int c = 30;					   	//Line 3
   int d = 40;					   	//Line 4
	
   cout<<"Line 5: Enter four integers: ";   	//Line 5
   cin>>a>>b>>c>>d;				  	//Line 6
   cout<<endl;					  	//Line 7
  cout<<"Line 8: The numbers you entered are:"
  	 <<endl;				   		//Line 8
   cout<<"Line 9: a = "<<a<<", b = "<<b		
	 <<", c = "<<c<<", d = "<<d<<endl;	   	//Line 9
*/

/********  ÖRNEK GİRİŞ:
Line 5: Enter four integers: 34 K 67 28

Line 8: The numbers you entered are:
Line 9: a = 34, b = 20 (0?), c = 30, d = 40

*** hata oluştuğunda sonrakileri direk atlar.
**********/   
//-------------------------------------------------------------------

  // getline(cin,str);
/****
  string ad;
  cin>>ad; // whitespace görene kadar alır
  cout<<"Merhaba "<<ad<<endl;
***/

/****
  string ad;
  getline(cin,ad);  // tüm satırı alır
  cout<<"Merhaba "<<ad<<endl;
***/
/*****
  char ad[256];
  //cin.getline(ad,256,'u');
  cin.getline(ad,5,'\n');
  cout<<"Merhaba "<<ad<<endl;
***/

//------------------------------------------------------------------

  // cout
/******
cout<<expression or manipulator
    <<expression or manipulator...;
expression is evaluated, its value is printed, and manipulator is used to format the output. 

cout<<setprecision(2); // toplam hane sayısını belirtir.

cout<<fixed;           // ondalık kısımda duyarlılık alır
****/  
/*
  double x=107.123,y=23;
  cout<<setprecision(3)<<x<<endl;  // 107 yazar
  cout<<fixed<<setprecision(2)<<x<<endl;  // 107.12 yazar
  cout<<fixed<<scientific<<setprecision(4)<<x<<endl;  // 1.0712e+02 (1.0712*10^2) yazar
  cout.unsetf(ios::fixed);    // fixed bayrağını unset yapar
  cout.unsetf(ios::scientific);
  cout<<setprecision(3)<<x<<endl;  // 107 yazar

  //cout<<showpoint;
  cout<<setprecision(4)<<y<<endl;  // 23.00 yazar

  cout.setf(ios::scientific);   // bayrağı setler
                                // fixed, scientific, showpoint...
  cout<<setprecision(4)<<y<<endl;  // 23.00 yazar
*/
//------------------------------------------------------------

/** setw(n);    
    bir sonra gelen ifadeyi n sütunda yazacak şekilde ayarlar, 
    default olarak sağa dayalıdır, 
    cout<<left ile sola cout<<right ile sağa ayarlanabilir
    taşma olursa gerektiği kadar genişletilir
**/
/*
  int x = 19;						//Line 1
	int a = 345;					//Line 2
	double y = 76.384;				//Line 3

	cout<<fixed<<showpoint;				//Line 4  
  cout<<"12345678901234567890"<<endl;		//Line 5

	cout<<setw(5)<<x<<endl;				//Line 6
	cout<<setw(5)<<a<<setw(5)<<"Hi"
	    <<setw(5)<<x<<endl<<endl;			//Line 7
	
	cout<<setprecision(2);				//Line 8
	cout<<setw(6)<<a<<setw(6)<<y
	    <<setw(6)<<x<<endl;				//Line 9
    	cout<<setw(6)<<x<<setw(6)<<a
	    <<setw(6)<<y<<endl<<endl;			//Line 10

	cout<<setw(5)<<a<<x<<endl;			//Line 11
	cout<<setw(2)<<a<<setw(4)<<x<<endl;		//Line 12
  */
//----------------------------------------------------
/*
  // fill() ve setfill()
  int x = 15;						//Line 1			
	int y = 7634;					//Line 2

	cout<<"12345678901234567890"<<endl;		//Line 3
	cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 4

	cout.fill('*');					//Line 5
	cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 6	
      cout<<setw(5)<<x<<setw(7)<<setfill('#')	
	    <<y<<setw(8)<<"Warm"<<endl;		//Line 7

	cout<<setw(5)<<setfill('@')<<x
	    <<setw(7)<<setfill('#')<<y
	    <<setw(8)<<setfill('^')<<"Warm"
	    <<endl;						//Line 8

	cout.fill(' ');					//Line 9
	cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 10  
*/
//---------------------------------------------------
/*
  // left, right manipulator
  int x = 15;						//Line 1
	int y = 7634;					//Line 2

	cout<<left;						//Line 3
	
	cout<<"12345678901234567890"<<endl;		//Line 4
	cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 5

	cout.fill('*');					//Line 6
cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 7

	cout<<setw(5)<<x<<setw(7)<<setfill('#')<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 8


	cout<<setw(5)<<setfill('@')<<x
	    <<setw(7)<<setfill('#')<<y
	    <<setw(8)<<setfill('^')<<"Warm"<<endl; //Line 9
						
	cout.unsetf(ios::left);				//Line 10
	cout.fill(' ');					//Line 11

	cout<<setw(5)<<x<<setw(7)<<y
	    <<setw(8)<<"Warm"<<endl;			//Line 12
*/
//------------------------------------------------------
/*** flush
    cout fonksiyonu ekrana bir şey yazarken buffer kullanır,
    buffer dolmadan genelde ekrana bir şey yazmaz,
    buffer dolduğunda ya da endl gördüğünde ekrana yazma işlemi gerçekleştirir
    bazen öyle durumlar olur ki buffer dolmadan bufferda bulunan karakterlerin ekrana yazılması gerekir
    bu durumda
    cout<<flush;  kullanılır
int num;
cout<<"Enter an integer: " <<flush;		//Line 1
cin>>num;					//Line 2
cout<<endl;					//Line 3
******/
//-----------------------------------------------------------

  return 0;
}
