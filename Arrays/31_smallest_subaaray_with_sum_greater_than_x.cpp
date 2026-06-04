#include<bits/stdc++.h>
using namespace std;
int smallestSubWithSum(int x, vector<int>& arr) {
        int n=arr.size();

        int i=0,j=0;
        int mn=INT_MAX;
        long long  sum=0;

        while(j<n){

            while(j<n && sum<=x){
                sum+= arr[j++];
            }

            if(j==n && sum<=x) break;

            while(i<j && sum-arr[i]>x){
                sum -=arr[i++];
            } 

            mn=min(mn,j-i);

            sum-= arr[i++];


        }

        if(mn==INT_MAX) return 0;
        else return mn;

       
        
    }

    int main(){

    }