#include <iostream>
using namespace std;

class Alive{
  public:
    Alive(string name="Alive Object",string type="Alive"){
      cout<<"Alive constructor"<<endl;
      this->name = name;
      this->type = type;
    }
    string getType(){return type;}
    string getName(){return name;}
  private:
    string name;
    string type;
};
class Animal:public Alive{
  public:
    Animal(string name="Animal",string type="Animal",int birthYear=1900):Alive(name,type){
      cout<<"Animal constructor"<<endl;
      this->birthYear = birthYear;
    }
  private:
    int birthYear;
};
class Human:public Animal{
  public:
    Human(string name="İnsan",string type="İnsan",int birthYear=1900,string race="TR"):Animal(name,type,birthYear){
      cout<<"Human constructor"<<endl;
      this->race = race;
    }
  private:
    string race;
};



int main() {
  Human h1[5];
  cout<<h1[0].getName()<<endl;
  return 0;
}
