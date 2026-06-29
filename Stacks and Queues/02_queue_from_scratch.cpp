#include<bits/stdc++.h>
using namespace std;
class myQueue {

  public:

  int *arr;
  int first;
  int last;
  int size;
  int ct;


    myQueue(int n) {
       arr =new int[n];
       first = 0;
       last =-1;
       size = n;
       ct =0;
    
    }

    bool isEmpty() {
       return ct ==0;
    }

    bool isFull() {
       return ct == size;
    }

    void enqueue(int x) {
        if(!isFull()){
            last = (last+1)%size;
            arr[last] =x;
            ct++;
        }
    }

    void dequeue() {
       if(!isEmpty()){
        first =(first+1)%size;
        ct--;
       }
    }

    int getFront() {
        if(!isEmpty()){
            return arr[first];
        }
        return -1;
    }

    int getRear() {
        if(!isEmpty()) return arr[last];
        return -1;
    }
};

int main(){

}