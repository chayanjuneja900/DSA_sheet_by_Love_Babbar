#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr) {
        
    vector<int>ans;
    ans.push_back(arr[arr.size()-1]);
    for(int i=0;i<arr.size()-1;i++){
        ans.push_back(arr[i]);
    }
    arr=ans;
        
    }

    int main(){
        int n;
        cin>>n;
        vector<int>arr;
        while(n--){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        rotate(arr);

        for(auto &it:arr){
            cout<<it<<" ";
        }
    }