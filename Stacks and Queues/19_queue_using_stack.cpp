#include<bits/stdc++.h>
using namespace std;

class myQueue {

    stack<int> s1;
    stack<int> s2;


  public:
    myQueue() {
        
    }

    void enqueue(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
           
        }

        s2.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        s1.pop();
    }

    int front() {
        if(s1.empty()) return -1;
        return s1.top();
    }

    int size() {
        return s1.size();
    }
};



int main(){

}