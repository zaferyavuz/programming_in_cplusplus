#include <iostream>
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

/*
ÇIKTI:
  Line 1: Enter a string: abcd

Line 4: After first cin.get(ch); ch = a
Line 6: After second cin.get(ch); ch = b
Line 9: After putback and then cin.get(ch); ch = b
Line 11: After cin.peek(); ch = c
Line 13: After cin.get(ch); ch = c
*/
//------------------------------------------------------------------ 

   

  return 0;
}
