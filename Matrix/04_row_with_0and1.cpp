#include<bits/stdc++.h>
using namespace std;
 int rowWithMax1s(vector<vector<int>> &arr) {
      
    int n = arr.size();
    int m = arr[0].size();

    int row =-1;
    int ind =INT_MAX;

    for (int i = 0; i < n; i++)
    {

       auto it = lower_bound(arr[i].begin(),arr[i].end(),1);
       if(it != arr[i].end()){
        int k = it - arr[i].begin();

        if(k<ind){
            row = i;
            ind =k;
        }
       }
        
    }

    return row;
    
        
    }
    int main(){

    }