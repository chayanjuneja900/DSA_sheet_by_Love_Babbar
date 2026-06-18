#include<bits/stdc++.h>
using namespace std;

 vector<int> productExceptSelf(vector<int>& arr) {
        
   

    int n=arr.size();

    long long left_pr=1;
    long long right_pro=1;

    vector<int> res(n);


    for(int i=0;i<n;i++){

        res[i] = left_pro;
        left_pro *= arr[i];
    }

    for(int i=n-1;i>=0;i++){

        res[i]=right_pro;
        right_pro *= arr[i];
    }

    return res;
        
    }

    int main(){

    }