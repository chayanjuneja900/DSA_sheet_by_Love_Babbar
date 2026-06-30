#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void reverse_queue(queue<int> &q){

        if(q.empty()) return ;

        int front =q.front();

        q.pop();

        reverse_queue(q);
        q.push(front);
    
    }

    queue<int> reverseFirstK(queue<int> q, int k) {
       
        queue<int> ans;
        
        if(k>q.size()) return q;
        

        
        
        while(k--){
            if(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        }

        reverse_queue(ans);

        while(!q.empty()) {
            ans.push(q.front());
            q.pop();
        }
        return ans;
        
    }
};


int main(){

}