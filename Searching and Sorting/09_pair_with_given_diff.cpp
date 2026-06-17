#include<bits/stdc++.h>
using namespace std;

  bool findPair(vector<int> &arr, int x) {
       
    int n = arr.size();

    unordered_set <int> hsh;

    for(int i=0;i<n;i++){
        if(hsh.count(arr[i]+x)|| hsh.count(arr[i]-x)) return true;

        hsh.insert(arr[i]);
    }


    return false;

        
    }

    int main(){

    }