#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;

        i++;
        j--;
    }
    return true;
}
int findMinInsertions(string &s) {

    int n = s.size();
    int i = n-1;

    int ct=0;


    while(i>=0 && !is_palindrome(s,0,i)){

        i--;
        ct++;
    }

    return ct;  
    }

    int main(){

    }