#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> ans;

    for(auto &it: a) {
      ans.insert(it);
    }

    for(auto &it: b) {
      ans.insert(it);
    }

    vector<int> final_ans;

    for(auto &it: ans){

      final_ans.push_back(it);

    }
    return final_ans;
        
    }

    int main(){

        
    }