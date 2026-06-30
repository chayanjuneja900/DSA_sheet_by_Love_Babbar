#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
       stack <int> s;

       int half = q.size()/2;

       for (int i = 0; i < half; i++)
       {
        s.push(q.front());
        q.pop();

    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < half; i++)
    {
        q.push(q.front());
        q.pop();
    }

    for (int i = 0; i < half; i++)
    {
        s.push(q.front());
        q.pop();

    }


    while(!s.empty()){
        q.push(s.top());
        s.pop();

        q.push(q.front());
        q.pop();
    }
    
    
       
        
    }
};

int main(){

}