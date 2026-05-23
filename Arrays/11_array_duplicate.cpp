#include<bits/stdc++.h>
using namespace std;

 vector<int> findDuplicates(vector<int>& arr) {
       unordered_map<int,int>m;
       for(auto &it :arr){
        m[it]++;
       }
    vector<int> ans;
       for(auto &it :m){
        if(it.second==2) ans.push_back(it.first);

       }
       
       sort (ans.begin(),ans.end());
       
       return ans;
        
    }

int main(){


}