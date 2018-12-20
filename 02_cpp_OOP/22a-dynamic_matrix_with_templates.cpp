#include <iostream>
#include <iomanip>  
using namespace std;

template <class Tip> 
class Matris {
  public:
    Matris(int rc=10,int cc=10){
      rowCount = rc;
      colCount = cc;
      items = new Tip*[rowCount];
      register int i;
      for(i=0;i<rowCount;i++){
        items[i] = new Tip[colCount];
      }
      for(int i=0;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
          items[i][j] = (i+j)%2;
        }
      }
    }
    void displayItems(){
      for(int i=0;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
          cout<<items[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    Tip &operator ()(int i, int j){
      return items[i][j];
    }
  private:
    int rowCount;
    int colCount;
    Tip **items;
};
int main() {
   Matris<double> m1(8,8);
   cout<<fixed<<setprecision(2);
   m1.displayItems();
   cout<<m1(4,3)<<endl;
   return 0;
}
