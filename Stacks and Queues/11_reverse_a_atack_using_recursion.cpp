#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    void insert_at_bottom(stack<int> &st,int x){
        if(st.empty()) {
            st.push(x);
            return;
        }

        int curr =st.top();
        st.pop();

        insert_at_bottom(st,x);
        st.push(curr);
    }
    void reverseStack(stack<int> &st) {

        if(st.empty()) return;

        int curr =st.top();
        st.pop();

        
        reverseStack(st);

        insert_at_bottom(st,curr);


    }
};