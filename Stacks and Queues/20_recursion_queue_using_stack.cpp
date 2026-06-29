#include<bits/stdc++.h>
using namespace std;

class myQueue {

    stack<int> s;

   

  public:
    myQueue() {
        
    }

    void enqueue(int x) {

        if(s.empty()){
            s.push(x);
            return;
        }

        int top =s.top();
        s.pop();

        enqueue(x);

        s.push(top);
      
    }

    void dequeue() {
        if(!s.empty()) s.pop();
      
    }

    int front() {

        if(s.empty()) return -1;
        return s.top();
        
    }

    int size() {
        return s.size();
        
    }
};
