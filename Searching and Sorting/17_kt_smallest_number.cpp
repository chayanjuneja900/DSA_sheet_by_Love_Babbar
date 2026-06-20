#include<bits/stdc++.h>
using namespace std;
vector<int> kthSmallestNum(int n, vector<vector<int>>& range, int q,
                               vector<int> queries) {

    sort(range.begin(),range.end());


    vector<int> res;

    int i=INT_MIN;

    for(auto &vec : range){

        if(vec[0]>i){
        i=vec[0];
    }

        while(i<=vec[1]){
           if(i>=vec[0]) res.push_back(i);
            i++;
        }
    }



    vector<int> ans;

    for(auto & quer :queries){

        if(quer==0 || quer> res.size()) ans.push_back(-1);

        else ans.push_back(res[quer-1]);
    }

    return ans;
        
    }
int main(){

}