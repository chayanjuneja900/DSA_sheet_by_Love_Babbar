#include<bits/stdc++.h>
using namespace std;
int countOccurence(vector<int>& arr, int k) {
       
    int n=arr.size();
    int to_chck=n/k;

    unordered_map<int,int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    int ct=0;

    for(auto &it: m ){
        if(it.second>to_chck) ct++;
    }
    return ct;
    
        
    }
int main(){

}