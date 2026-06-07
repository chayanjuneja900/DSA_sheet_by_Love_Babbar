#include<bits/stdc++.h>
using namespace std;

int maxSubStr(string &s) {

    int ct_0=0,ct_1=0;

    int ct_Ans=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0') ct_0++;
        if(s[i]=='1') ct_1++;

        if(ct_0==ct_1){
            ct_Ans++;
            ct_0=0;
            ct_1=0;

        } 
    }

    return (ct_0==0 &&ct_1==0) ? ct_Ans : -1;



       
        
    }

int main(){

}