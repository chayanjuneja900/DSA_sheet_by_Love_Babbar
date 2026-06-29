#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool checkRedundancy(string &s) {
        
        bool is_true =false;

        int n=s.size();

        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' ){
                st.push(s[i]);
            }

            if(s[i]==')'){
                if(!st.empty() && st.top() =='('){
                    is_true = true;
                }
                while(!st.empty() && st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
        
        return is_true;
    }
    
};

int main(){

}