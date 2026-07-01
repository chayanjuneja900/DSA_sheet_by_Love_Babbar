#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
       
        vector<int> neg;

        int n =arr.size();

        for (int i = 0; i < n; i++)
        {
           if(arr[i]<0) neg.push_back(i);
        }

        vector<int> ans;

        for (int i = 0; i <= n-k; i++)
        {
            auto lo =lower_bound(neg.begin(),neg.end(),i);
            if(lo != neg.end() &&  *lo < i+k){

                ans.push_back(arr[*lo]);
            }
            else{
                ans.push_back(0);
            }
        }
        
        
        return ans;
    }
};

int main(){

}