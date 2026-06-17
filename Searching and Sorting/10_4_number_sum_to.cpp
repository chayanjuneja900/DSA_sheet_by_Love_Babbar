#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target) {
       

    int n=arr.size();

  

    set<vector<int>> res;

    

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            
              unordered_set<long long > hsh ;


            for(int k=j+1;k<n;k++){

                 vector<int> temp;

                long long to_check= (long long)target- arr[i]-arr[j]-arr[k];

                if(hsh.count(to_check)) {

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    temp.push_back((int)to_check);


                    sort(temp.begin(),temp.end());

                    res.insert(temp);

                    temp.clear();
                }

                hsh.insert(arr[k]);

            }
        }
    }

    vector<vector<int>> ans;

    for(auto &it : res){

        ans.push_back(it);

    }

    return ans;
        
    }

    int main(){


    }