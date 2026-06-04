#include<bits/stdc++.h>
using namespace std;
bool hasTripletSum(vector<int> &arr, int target) {

    int n=arr.size();

    sort(arr.begin(),arr.end());

    for (int i = 0; i < n; i++)
    {
        int req_sum=target-arr[i];

        int l=i+1,r=n-1;

        while(l<r){
            if(arr[l]+arr[r]==req_sum) return true;

            if( arr[l]+arr[r] < req_sum) l++;
            else if( arr[l]+arr[r] > req_sum) r--;

        }
    }
    return false;    
    }

int main(){


}