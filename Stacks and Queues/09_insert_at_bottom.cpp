#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {

        stack<int> ans;

        int n =st.size();

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i]=st.top();
            st.pop();
        }

        ans.push(x);

        for(int i=n-1;i>=0;i--){
            ans.push(v[i]);
        }
        return ans;
        
    }
};

int main(){

}