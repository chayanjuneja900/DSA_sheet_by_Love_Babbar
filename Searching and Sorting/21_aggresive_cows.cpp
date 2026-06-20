#include<bits/stdc++.h>
using namespace std;

bool is_possible(int d,int k, vector<int> &stalls){

    int last =-1;


    for(int i=0;i<stalls.size();i++){
        if(last==-1) {
            k--;
            last =stalls[0];
            continue;
    }

    if((stalls[i] - last)>=d) {
        last=stalls[i];
        k--;
    }
    }

    if(k<=0) return true;
    else return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
        
    int n= stalls.size();

    sort(stalls.begin(),stalls.end());



    int lo = 0;
    int hi = stalls[n-1]-stalls[0];

    int mid;


    while(hi-lo>1){

        mid =(hi+lo)/2;

        if(is_possible(mid,k,stalls)){
            lo = mid;
        }
        else hi = mid-1;

    }

    if(is_possible(hi,k,stalls)) return hi;
    else return lo;

        
    }

    int main(){

    }