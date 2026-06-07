#include<bits/stdc++.h>
using namespace std;

vector<int> LPS_construction(string &s){

    int n=s.size();
    vector<int>lps(n);

    int i=1;
    lps[0]=0;

    int len=0;

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
    return lps;

}

bool KMP_check(string &txt,string &pat){

    int n = txt.size();
    int m = pat.size();

    vector<int> lps=LPS_construction(pat);

    int i=0 ,j=0;

    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;

            if(j==m) {
                return true;
                j=lps[j-1];
            
            }
        }
        else{
            if(j!=0){
            j=lps[j-1];
        }
        else{
            i++;
        }

        }
    }
    return false;

}

bool wordBreak(string &s, vector<string> &dictionary) {

    for(auto &it : dictionary){
        if(KMP_check(s,it)) return true;
    }

    return false;
       
        
    }

int main(){

}    