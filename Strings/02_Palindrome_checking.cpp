#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(string& s) {
        int n=s.size();

        bool is_true=true;

        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]) {is_true=false;
            break;}

        }
        return is_true;
    }

    int main(){

    }