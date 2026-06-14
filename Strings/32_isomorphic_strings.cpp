#include<bits/stdc++.h>
using namespace std;
bool areIsomorphic(string &s1, string &s2) {
        
    int n=s1.size();

    vector<char> hsh(256,'-');

    vector<int> vis(256,0);

    for(int i=0;i<n;i++){
        if(hsh[s1[i]]=='-') {

            if(vis[s2[i]]==0){
            hsh[s1[i]]=s2[i];
            vis[s2[i]]=1;
            }
            else return false;
        }

        else{
            if(hsh[s1[i]]!= s2[i]) return false;


        }
    }

    return true;
        
    }


    int main(){

    }