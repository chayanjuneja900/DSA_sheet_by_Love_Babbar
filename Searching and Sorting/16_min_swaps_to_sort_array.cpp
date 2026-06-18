#include<bits/stdc++.h>
using namespace std;

 int minSwaps(vector<int>& arr) {

    vector<int> temp = arr;

    sort(temp.begin(),temp.end());
       
    int n = arr.size();

    unordered_map<int,int> hsh;

    for(int i=0;i<n;i++){
        hsh[arr[i]]=i;
    }

    int swaps=0;

    for(int i=0;i<n;i++){

        if(arr[i]!= temp[i]){
            int ind = hsh[temp[i]];


            hsh[temp[i]] =i;
            hsh[arr[i]] = ind;

            swap(arr[i],arr[ind]);

            swaps++;


            
        }

    }

    return swaps;


        
    }

    int main(){

    }