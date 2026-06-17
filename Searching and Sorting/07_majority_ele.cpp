#include<bits/stdc++.h>
using namespace std;
 int majorityElement(vector<int>& arr) {

    int n=arr.size();

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;

    }

    int to_check=n/2;

    int indx=-1;

    for(auto &it :m){
        if(it.second > to_check) indx =it.first;
    }

    return indx ;
        
        
        
    }

    int main(){

    }