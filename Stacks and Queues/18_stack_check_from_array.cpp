#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool validateOp(vector<int>& a, vector<int>& b) {

        int n = a.size();
        
        stack<int> s;

        int i=0,j=0;

        while(i<n || j<n){
            if(s.empty() && i<n) {
                s.push(a[i++]);
                continue;
        }
        if(s.top()==b[j]){
            s.pop();
            j++;
        }
        else{

            if(i<n) s.push(a[i++]);
            else return false;
            
        }

            
        }
        
        if(s.empty() && i==n && j==n) return true;
        else return false;
    }
};

int main(){

}