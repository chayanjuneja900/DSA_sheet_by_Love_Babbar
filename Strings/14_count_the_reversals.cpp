#include<bits/stdc++.h>
using namespace std;
int countMinReversals(string s) {
       
    int n=s.size();

    if(n%2) return -1;

    stack<int> st;

    int ct=0;

    for (int i = 0; i < n; i++)
    {
       if(s[i]=='{') st.push(-1);

       else{

        if(st.empty()) ct++;

        else{st.pop();}

       }

    }

    int close = st.size();
    int open = ct;

    return ((open+1)/2)+((close+1)/2);    

        
    }
int main(){}    