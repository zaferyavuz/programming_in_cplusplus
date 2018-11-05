#include <iostream>
#define N 10
using namespace std;

class MyQueue{
  public:
    MyQueue(){
      itemCount     = 0;
      readPointer   = 0;
      writePointer  = 0;
      capacity      = N;
    }
    void setReadPointer(int r){
      if(itemCount == 0)
        readPointer = r;
    }
    void setWritePointer(int w){
      if(itemCount == 0)
        writePointer = w;
    }
    int getReadPointer(){
      return readPointer;
    }
    int getWritePointer(){
      return writePointer;
    }
    int getCapacity(){
      return capacity;
    }
    int getItemCount(){
      return itemCount;
    }
    void append(int a){
      if(itemCount < capacity){
        items[writePointer] = a;
        writePointer = (writePointer + 1) % N;
        itemCount++;
      }
    }
    int pop(){
      if(itemCount>0){
        int i = items[readPointer];
        readPointer = (readPointer+1) % N;
        itemCount--;
        return  i;
      }
      else
        return 0;
    }
// https://codeshare.io/5QrXB7
  private:
    int items[N];
    int readPointer;
    int writePointer;
    int capacity;
    int itemCount;
};


int main() {
  MyQueue q1;
  q1.append(2);
  q1.append(5);
  q1.append(7);
  cout<<q1.pop()<<endl; // 2
  q1.append(10);
  q1.append(50);
  q1.append(17);
  cout<<q1.pop()<<endl;  // 5
  cout<<q1.getItemCount()<<endl;  // 4

 
  return 0;
}
