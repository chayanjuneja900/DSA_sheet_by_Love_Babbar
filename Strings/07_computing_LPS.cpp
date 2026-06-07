#include<bits/stdc++.h>
using namespace std;

 int getLPSLength(string &s) {
        
    int n=s.size();

    int i=1;
    int len=0;

    vector<int>lps(n);
    lps[0]=0;

    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }

        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }

    int mx=lps[0];

   return lps[n-1];
        
    }
int main(){

}