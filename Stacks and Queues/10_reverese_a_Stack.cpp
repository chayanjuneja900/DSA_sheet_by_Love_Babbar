#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseStack(stack<int> &st) {
        
        int n =st.size();

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i]=st.top();
            st.pop();
        }

        for(int i=0;i<n;i++){
            st.push(v[i]);
        }
        
        
    }
};

int main(){

}