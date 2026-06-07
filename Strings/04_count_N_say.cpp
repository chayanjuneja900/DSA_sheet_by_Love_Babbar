#include<bits/stdc++.h>
using namespace std;
string compute_string(string &s){

    int n=s.size();

    int i=0;
    string ans;

    while(i<n){
        int ct=1;
        while(s[i]==s[i+1] && i< n-1){
            ct++;
            i++;
        }
        ans.push_back(ct+'0');
        ans.push_back(s[i]);
        i++;
    }
    return ans;
}
string countAndSay(int n) {
       
    string s="1";

    for(int i=1;i<n;i++){
        s=compute_string(s);
    }

    return s;
        

}


int main(){

}