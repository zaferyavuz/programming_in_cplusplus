/* 
 * File:   p001-multiples of 3 or 5.cpp
 * Author: BARISATAK
 * Purpose: The sum of all the multiples of 3 or 5 below 1000.
 * Created on 22 Ekim 2018 Pazartesi, 20:10
 */

#include <iostream>
using namespace std;

int summation(int sum){
    
    for( int counter = 1; counter < 1000; counter++){
        if(counter % 3 == 0 || counter % 5 == 0) {
            sum += counter;
        }
    }
    return sum;
}


int main(int argc, char** argv){
    
    int sum = 0;
  
    cout<<"1000'e kadar olan 3 veya 5'in katlari toplami     :"<<summation(sum)<<endl;
    
    return 0;
}
