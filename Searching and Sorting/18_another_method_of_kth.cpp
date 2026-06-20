#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge (vector<vector<int>> & range){
   


    int n = range.size();

    vector<vector<int>> merged;

    for(int i=0;i<n-1;i++){
        if(range[i][1]>= range[i+1][0]){
             range[i+1][0] = min( range[i][0] , range[i+1][0] );
             range[i+1][1] = max( range[i][1] , range[i+1][1] );
        }

        else{
            merged.push_back(range[i]);
        }
    }

    merged.push_back(range[n-1]);
    return merged;
}

vector<int> kthSmallestNum(int n, vector<vector<int>>& range, int q,
                               vector<int> queries) {

                                 vector<int> ans;

                                 if(range.size()==0) return ans;

    sort(range.begin(),range.end());
    
    vector<vector<int>> merged = merge(range);

    sort(merged.begin(),merged.end());

    vector<int> hsh(merged.size());

    int sum=0;

    int i=0;

    for(auto &vec :merged){

        sum += vec[1]-vec[0]+1;

        hsh[i]=sum;
        i++;

    }

    
    for(auto & quer :queries){

        auto it =lower_bound(hsh.begin(),hsh.end(),quer);

        if(it!= hsh.end()){

            int k = it - hsh.begin();

            if(k==0){
                ans.push_back(merged[0][0]+quer-1);
            }
            else{
                int ind = quer - hsh[k-1]-1;

                ans.push_back(merged[k][0]+ind);


            }
        }
        else{ 
            ans.push_back(-1);
        }

    }
    return ans;
    




 }
 int main(){

 }