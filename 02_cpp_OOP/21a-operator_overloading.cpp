#include <iostream>
using namespace std;

class Voxel{
 public:
   Voxel(double x=0.0,double y=0.0,double z=0.0){
     this->x = x;
     this->y = y;
     this->z = z; 
   }
   void print(){
     cout << "(" << x << "," << y << "," << z << ")" << endl;
   }
   Voxel operator+(const Voxel & v){
     Voxel v2;
     v2.x = this->x + v.x;
     v2.y = this->y + v.y;
     v2.z = this->z + v.z;
     return v2; 
   }
   Voxel topla(const Voxel & v){
     Voxel v2;
     v2.x = this->x + v.x;
     v2.y = this->y + v.y;
     v2.z = this->z + v.z;
     return v2; 
   }
   Voxel operator++(){
     Voxel v;
     v.x = this->x + 1;
     v.y = this->y + 1;
     v.z = this->z + 1;
     return v;
   }
   Voxel operator-(){
     Voxel v;
     v.x = -this->x;
     v.y = -this->y;
     v.z = -this->z;
     return v;
   }
   Voxel operator-(const Voxel & minus){
     Voxel v;
     v.x = this->x - minus.x;
     v.y = this->y - minus.y;
     v.z = this->z - minus.z;
     return v;
   }
   bool operator > (const Voxel & v){
     double m1 = this->x * this->x;
     m1 += this->y * this->y;
     m1 += this->z * this->z;

     double m2 = v.x * v.x;
     m2 += v.y * v.y;
     m2 += v.z * v.z;

     return ( m1 > m2 );
     /*
     if( m1 > m2 ) return true;
     return false;
     */
   }
   friend ostream &operator << ( ostream &output, const Voxel &v ) {
        output << "P(" << v.x << "," << v.y << "," << v.z << ")";
        return output;           
   }
   friend istream &operator >> ( istream  &input, Voxel &v ) {
        input >> v.x >> v.y >> v.z;
        return input;           
   }
 private:
   double x;
   double y;
   double z;
};

int main() {
 Voxel v1(2,3,4);
 Voxel v2(5,6,7);
 v1.print();
 v2.print();
  //Voxel v3 = v1.topla(v2);
 Voxel v3 = v1 + v2;
 v3.print();
 v2.print();

 Voxel v4 = ++v1;
 v4.print();

 Voxel v5 = v4 - v1;
 cout<<v5<<endl;

 cout << (v1 > v2) << endl;

 cout<<"Nokta giriniz(x,y,z):";
 cin>>v2;
 cout<<(v2+v1);
 return 0;
}
