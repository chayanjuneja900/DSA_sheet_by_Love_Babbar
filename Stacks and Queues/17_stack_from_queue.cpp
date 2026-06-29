#include<bits/stdc++.h>
using namespace std;

class myStack {
    queue<int> q;

  public:

    void push(int x) {

        q.push(x);

        for (int i = 0; i < q.size()-1; i++)
        {
            int k =q.front();
            q.pop();
            q.push(k);
        }
        
    }

    void pop() {
        if(q.empty()) return;
        q.pop();
    }

    int top() {
        if(q.size()>0) return   q.front();
        return -1;
    }

    int size() {
        return q.size();
    }
};


int main(){

}