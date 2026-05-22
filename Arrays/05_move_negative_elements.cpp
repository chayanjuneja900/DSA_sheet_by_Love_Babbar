#include<bits/stdc++.h>
using namespace std;

void segregateElements(vector<int>& arr) {
       vector<int> ans;

        vector<int> neg_num;

        for (int i = 0; i < arr.size(); ++i)
        {
        	if(arr[i]<0) neg_num.push_back(arr[i]);
        	else ans.push_back(arr[i]);
        }

        for(auto &it : neg_num){
        	ans.push_back(it);
        }
        
        arr=ans;
        
        
    }

    int main(){

        
    }