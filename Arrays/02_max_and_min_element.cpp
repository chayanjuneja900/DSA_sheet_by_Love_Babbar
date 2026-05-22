#include<bits/stdc++.h>
using namespace std;

    vector<int> getMinMax(vector<int> &arr) {
       int mn= *min_element(arr.begin(),arr.end());
       int mx= *max_element(arr.begin(),arr.end());
       
       vector<int>ans;
       ans.push_back(mn);
       ans.push_back(mx);
       return ans;
        
    }

    int main(){

        
    }
