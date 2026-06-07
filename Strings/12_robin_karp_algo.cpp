#include<bits/stdc++.h>
using namespace std;

vector<int> rabinKarp(string &text, string &pattern) {
       int n= text.size();
       int m=pattern.size();



       vector<int> ans;

       if(n<m ||m==0) return ans;

       int hsh_p=0;
       int hsh_t=0;

       int d=256;
       int q=101;

       int h=1;

       for(int i=0;i<m-1;i++){
        h = (h*1ll*d)%q;
       }

       // calculating hsh for pat ant text;

       for(int i=0;i<m;i++){
        hsh_p=(((d*hsh_p)%q)+pattern[i])%q;

        hsh_t= (((d*hsh_t)%q)+text[i])%q;
       }

       for(int i=0;i<=n-m;i++){
        if(hsh_p==hsh_t){

            bool is_match=true;

            int j=0;

            while(j<m){
                if(text[i+j]!= pattern[j]){ is_match=false;
                break;
            } 
            j++;
            }
            if(is_match) ans.push_back(i);
        }

        if(i<n-m){
            hsh_t= ((d*(hsh_t-text[i]*h) %q) + text[i+m]) %q;

            if(hsh_t<0) hsh_t+=q;
        }
       }
       return ans;
        
    }

int main(){

}    