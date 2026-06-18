#include<bits/stdc++.h>
using namespace std;

vector<int> sortBySetBitCount(vector<int>& arr) {
        
    int n = arr.size();

    map<int,vector<int>> m;

    for(int i=0;i<n;i++){
        m[__builtin_popcount(arr[i])].push_back(arr[i]);
    }

    vector<int> res;

    for(auto &i :m){

        auto vec = i.second;

        reverse(vec.begin(),vec.end());

        for(auto &it :vec){
            res.push_back(it);
        }

    }

    reverse(res.begin(),res.end());

    return res;


    }

    int main(){

    }
