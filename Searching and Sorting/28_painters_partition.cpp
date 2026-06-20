#include<bits/stdc++.h>
using namespace std;

bool is_possible(int m,vector<int> &arr, int k){

    int ct=1;
    int sum=0;

    int n=arr.size();

    for(int i=0;i<n;i++){
        if(sum + arr[i] > m){ 
            ct++;
            sum =arr[i];
    
        }

        else{
            sum += arr[i];
        }
    }
    return (ct<=k);
}

int minTime(vector<int>& arr, int k) {
       
    int lo = *max_element(arr.begin(),arr.end());
    int hi = accumulate(arr.begin(),arr.end(),0);

    int mid;
    
    int n = arr.size();

    while(lo<hi){

        mid = lo + (hi-lo)/2;

        if(is_possible(mid,arr,k)){
            hi =mid;
        }
        else{
            lo =mid+1;
        }


    }


    return lo;


        
    }

    int main(){

    }