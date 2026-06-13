#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> anagrams(vector<string>& arr) {
       

    int n =arr.size();

    for (int i = 0; i < n; i++)
    {
      sort(arr[i].begin(),arr[i].end());

    }

    sort(arr.begin(),arr.end());
    vector<vector<string>> ans;

    vector<string> temp;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]!= arr[i-1]){
            
        }
    }
    


    
    
    
 
        
    }
int main(){

}    