#include<bits/stdc++.h>
using namespace std;

vector<int> Construct_lps(string &pat){
    int n=pat.size();

    vector<int>lps(n);

    int len=0;

    lps[0]=0;
    int i=1;// yha i=1 se start krna tha mne 0 se start kr dia tha
    

    while(i<n){
        if(pat[i]==pat[len]){
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

bool areRotations(string &s1, string &s2) {

    if(s1.size()!=s2.size()) return false;
        
    s1=s1+s1;

    vector<int>lps=Construct_lps(s2);

    int n=s1.size();
    int m=s2.size();

    int i=0,j=0;

    while(i<n){
        if(s1[i]==s2[j]){
            i++;
            j++;

            if(j==m){
                return true;

                j=lps[j-1];//to remove unnecessary checking just for sake of algorithm wrote this vaise phle hi return ho jayega


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

    int main(){

    }