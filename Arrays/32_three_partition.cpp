#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(vector<int>& arr, int a, int b) {
    
    int n=arr.size();

    vector<int> less_a;
    vector<int> greater_b;

    vector<int> between;
    for(int i=0;i<n;i++){

        if(arr[i]<a) less_a.push_back(arr[i]);

        if(arr[i]>=a && arr[i]<=b) between.push_back(arr[i]);

        if(arr[i]>b) greater_b.push_back(arr[i]);

    }

   int i=0;

   arr.clear();

  
    for(auto & it :less_a){
        arr.push_back(it);

    }

    for(auto & it :between){
        arr.push_back(it);

    }

    for(auto & it :greater_b){
        arr.push_back(it);

    }
   
    
        
    }
int main(){

}