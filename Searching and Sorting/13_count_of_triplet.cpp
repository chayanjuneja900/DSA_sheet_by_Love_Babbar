#include<bits/stdc++.h>
using namespace std;

int countTriplets(int sum, vector<int>& arr) {

    sort(arr.begin(),arr.end());


    int n = arr.size();

    int ct=0;

    for(int i=0;i<n;i++){

        int start =i+1;
        int end= n-1;

        while(start<end){

            if((arr[i]+arr[start]+arr[end]) < sum ) {
                ct+=(end-start);
                start++;
            }

            else{
                end--;
        } 

    }
        
    }
    return ct;
}

    int main(){

    }