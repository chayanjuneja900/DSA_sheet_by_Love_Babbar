#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
       
        stack<int> s;
        int n =arr.size();

        vector<int> ngl(n);

        

        for(int i=0;i<n;i++){
            if(s.empty()) s.push(i);


            else{

                while( !s.empty() && arr[i]>arr[s.top()] ){
                    ngl[s.top()]=arr[i];
                    s.pop();

                    

                }
                s.push(i);
            }
        }
        
        while(!s.empty()){
            ngl[s.top()]=-1;
            s.pop();
        }
        return ngl;
        
    }
};

int main(){

}