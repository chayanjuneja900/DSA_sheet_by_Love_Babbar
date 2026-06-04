#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int> &arr) {
       double ans=0;

       int n=arr.size();
       
       sort(arr.begin(),arr.end());

       if(n%2==1){
        ans=arr[n/2];
       }

       else{
        int k=n/2;
        ans= ((double) arr[k]+(double) arr[k-1])/ (double) 2;
       }
       return ans;
    }

int main(){

}