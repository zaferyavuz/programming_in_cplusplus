#include <iostream>
using namespace std;
 
class Matris {
  public:
    Matris(int rc=10,int cc=10){
      rowCount = rc;
      colCount = cc;
      items = new int*[rowCount];
      register int i;
      for(i=0;i<rowCount;i++){
        items[i] = new int[colCount];
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
          cout<<items[i][j];
        }
        cout<<endl;
      }
    }
    int &operator ()(int i, int j){
      return items[i][j];
    }
  private:
    int rowCount;
    int colCount;
    int **items;
};
int main() {
   Matris m1(8,8);
   m1.displayItems();
   cout<<m1(4,3);
   return 0;
}
