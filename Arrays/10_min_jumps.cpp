#include<bits/stdc++.h>
using namespace std;

  int minJumps(vector<int>& arr) {

    int n=arr.size();
    int ct=0;

    int furthest=0;
    int curr_mx=0;

    int i=0;
    for(int i=0;i<n;i++){
        furthest=max(furthest,i+arr[i]);
        if(furthest>=n-1) return ct+1;

        if(i==curr_mx){
            if(i==furthest) return -1;
            else curr_mx=furthest;
            ct++; 
        }
    }
    return 0;

  }


int main(){

    int n;
    cin>>n;
    
    vector<int> v;


    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<minJumps(v)<<endl;


}