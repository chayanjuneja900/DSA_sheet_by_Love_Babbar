#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string& s) {

    unordered_map<char,int> m={{'(',1},{')',-1},{'{',2},{'}',-2},{'[',3},{']',-3}};

    stack<int> s;

    int n=s.size();

    for(int i = 0 ; i < n ; i++){
        if(m[s[i]]>0) s.push(m[s[i]]);

        if(m[s[i]]<0) {

            if(s.empty()) return false;

            if(s.top()+m[s[i]]!=0) return false;

            s.pop();
        }
    }

    if(!s.empty()) return false;

    return true;
        
        
    }


int main(){

}