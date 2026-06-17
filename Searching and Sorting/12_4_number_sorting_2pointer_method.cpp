#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &arr, int target) {

    int n=arr.size();

    sort(arr.begin(),arr.end());

    set<vector<int>> s;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            long long to_check = (long long)target- arr[i]-arr[j];

            int start= j+1, end=n-1;

            vector<int> temp;

            while(start<end){
                long long sum =(long long)arr[start]+arr[end];

                if(sum == to_check) {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[start]);
                    temp.push_back(arr[end]);

                    s.insert(temp);

                    temp.clear();

                    start++;
                    end--;

                }

                if(sum > to_check) end--;
                if(sum< to_check) start++;

            }
        }
    }

    vector<vector<int>> ans;

    for(auto &it : s){
        ans.push_back(it);
    }

    return ans;
}

int main(){}