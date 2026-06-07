#include<bits/stdc++.h>
using namespace std;
int minFlips(string& s) {

    int n=s.size();

    string temp=s;

    int ct_l=0;
    int ct_r=0;

    for(int i=1;i<n;i++){
        if(temp[i]=='1' && temp[i-1]=='1') {temp[i]='0';
       ct_l++;
     }
        if(temp[i]=='0' && temp[i-1]=='0') {temp[i]='1';
        ct_l++;
    }

    }

    temp=s;

    if(temp[0]=='0') temp[0]='1';
    else{
     temp[0]='0';}
     ct_r++;

    for(int i=1;i<n;i++){
        if(temp[i]=='1' && temp[i-1]=='1') {temp[i]='0';
       ct_r++;
     }
        if(temp[i]=='0' && temp[i-1]=='0') {temp[i]='1';
        ct_r++;
    }
    }
    

    return min(ct_l,ct_r);
   
    }
int main(){

}