#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> arr) {
        
    int n=arr.size();

    int mn=INT_MAX;

    int ind=0;

    for(int i=0;i<n;i++){
        if(mn > arr[i].size()){
            mn=arr[i].size();
            ind=i;
        }
    }

    string ans;

    for(int i=0;i<mn;i++){
        for(int j=0;j<n;j++){
            if(arr[ind][i]!=arr[j][i]){
                return ans;
            }
        }
        ans.push_back(arr[ind][i]);

    }
    return ans;
        
    }

int main(){

}