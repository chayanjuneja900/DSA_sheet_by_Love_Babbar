#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n=arr.size();

        sort(arr.begin(),arr.end());

        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            if(ans.size()==0) ans.push_back(arr[i]);
            else{
                int curr_in=ans.size()-1;

                int arr_1=arr[i][0];
                int arr_2=arr[i][1];

                int ans_1=ans[curr_in][0];
                int ans_2=ans[curr_in][1];

                if( ans_2 >= arr_1){
                    ans[curr_in][1]=max(arr_2,ans_2);


                }
                else{
                    ans.push_back(arr[i]);
                }
            }
        }
        return ans;
        
    }
int main(){


}