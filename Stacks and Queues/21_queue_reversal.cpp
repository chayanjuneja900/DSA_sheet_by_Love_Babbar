#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    
    void reverseQueue(queue<int> &q) {

        if(q.empty()) return ;

        int front= q.front();
        q.pop();

        reverseQueue(q);

        q.push(front);
       
        
    }
};

int main(){

}