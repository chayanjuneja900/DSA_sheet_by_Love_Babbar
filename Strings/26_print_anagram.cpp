#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> anagrams(vector<string>& arr) {

    int n=arr.size();

    unordered_map <string,vector<string>> m;


    for(int i=0;i<n;i++){

        string temp = arr[i];

        sort(temp.begin(),temp.end());

        m[temp].push_back(arr[i]);
    }

    vector<vector<string>> ans;

    for(auto &it : m){

        auto vec =it.second;

        ans.push_back(vec);
    }
    return ans;
       

 }
int main(){

}    