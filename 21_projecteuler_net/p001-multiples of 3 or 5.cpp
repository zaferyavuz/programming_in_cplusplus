#include <iostream>
using namespace std;
int main()
{
    int index,sum=0;
    for(index=0;index<1000;index++){
        if(index%3==0 || index%5==0){
            sum+=index;
        }
    }
    cout <<"Sum: "<<sum<<endl;
    return 0;
}
