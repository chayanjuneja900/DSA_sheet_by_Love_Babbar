#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &arr, int target) {

    int n = arr.size();

    unordered_map<int,vector<pair<int,int>>> m;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            m[arr[i]+arr[j]].push_back({i,j});

        }
    }

    set<vector<int>> s;

    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            auto to_check =(long long) target -arr[i]-arr[j];

            if(m.find((int)to_check)!= m.end()){

               

                auto v_match = m[(int) to_check];

                for(auto & it : v_match){
                    
                     vector<int> temp;

                    if(it.first!= i && it.first != j && it.second!= i && it.second != j){

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[it.first]);
                    temp.push_back(arr[it.second]);

                    sort(temp.begin(),temp.end());

                    s.insert(temp);
                    }

                }
            }
        }
    }


    for(auto & it :s){
        ans.push_back(it);
    }

    return ans;
}

int main(){

}
       