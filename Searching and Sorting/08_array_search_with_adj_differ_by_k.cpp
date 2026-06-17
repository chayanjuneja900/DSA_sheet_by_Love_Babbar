#include<bits/stdc++.h>
using namespace std;
int findStepKeyIndex(vector<int>& arr, int k, int x) {

    int n=arr.size();

    int i=0;
        
    while(i<n){

        if(arr[i]==x) return i;

        i += max(1, abs(arr[i]-x)/k);
    }


    if(i>=n) return -1;
        
    }

    int main(){

    }