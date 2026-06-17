#include<bits/stdc++.h>
using namespace std;
vector<int> findTwoElement(vector<int>& arr) {

    
    vector<int> ans;
       
    int n= arr.size();

    vector<int> hsh(n+1,0);


    for(int i=0;i<n;i++){
       hsh[arr[i]]++;

    }

    for(int i=1;i<n+1;i++){
        if(hsh[i]==2) ans.push_back(i);
        if(hsh[i]==0) ans.push_back(i);

    }
        return ans;
    }

    int main(){

    }