#include<bits/stdc++.h>
using namespace std;

 int getMinDiff(vector<int> &arr, int k) {
        
    int n=arr.size();

    sort(arr.begin(),arr.end());

    int sol=arr[n-1]-arr[0];

    for(int i=1;i<n;i++){

        if(arr[i]-k<0)continue;

        int MIN_H=min(arr[0]+k,arr[i]-k);
        int MAX_H=max(arr[n-1]-k,arr[i-1]+k);

        sol=min(sol,MAX_H-MIN_H);
    }
    return sol;

    

        
    }

int main (){

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<getMinDiff(arr,k);
    




}
