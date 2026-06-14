#include<bits/stdc++.h>
using namespace std;

 int transform(string &s1, string &s2) {

    int n=s1.size();

    if(s2.size()!= n) return -1;


    vector<int> hsh1(256,0);
    vector<int> hsh2(256,0);


    for(int i=0;i<n;i++){
        hsh1[s1[i]]++;
        
    }

    for(int i=0;i<n;i++){
        hsh2[s2[i]]++;
        
    }

    if(hsh1!=hsh2) return -1;


    int i=n-1,j=n-1;

    int res=0;

    while(i>=0 && j>=0){

        while(i>=0 && s1[i]!=s2[j]){
            res++;
            i--;
        }

        i--;
        j--;
    }
    return res;
      
    }

    int main(){

    }