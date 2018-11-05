#include <iostream>
#define N 2
using namespace std;

class Kuyruk{
  public:
    Kuyruk(){
      writePointer = 0;
      readPointer = 0;
      elemanSayisi = 0;
      kapasite = N;
    }
    void setReadPointer(int r){
      readPointer = r;
    }
    void setWritePointer(int w){
      writePointer = w;
    }
    int getReadPointer(){
      return readPointer;
    }
    int getWritePointer(){
      return writePointer;
    }
    void KuyrugaEkle(int i){
      if(elemanSayisi==kapasite) return;
      elemanSayisi++;
      items[writePointer] = i;
      writePointer = (writePointer+1) % N;
    }
    int KuyruktanCek(){
        if(elemanSayisi != 0){
          elemanSayisi--;
          int item = items[readPointer];
          readPointer = (readPointer+1) % N;
          return item;
        } 
        else return -10000;
    } 
    bool KuyrukBos(){
      if(elemanSayisi == 0)
        return true;
      else
        return false;
    }
    int KuyruktakiElemanSayisi(){
      return elemanSayisi;
    }
  private:
    int items[N];
    int readPointer;
    int writePointer;
    int elemanSayisi;
    int kapasite;
}; 

int main() {
  Kuyruk k1;
  k1.KuyrugaEkle(1);
  k1.KuyrugaEkle(2);
  cout<<k1.KuyruktanCek();
    

  return 0;
}
