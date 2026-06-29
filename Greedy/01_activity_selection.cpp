#include<bits/stdc++.h>
using namespace std;

 int activitySelection(vector<int> &start, vector<int> &finish) {
       
    int n =start.size();

    if(n==0)return 0;

    vector<pair<int,int>> m;

    for(int i=0;i<n;i++){

        m.push_back({finish[i],start[i]});

    }
    int ct =0;

    int last =-1;

    sort(m.begin(),m.end());



    for(auto &it :m){

        int end =it.first;

        int str =it.second;

        if(last == -1){
            ct++;
            last = end;
            continue;
        }
        
        if(str > last ){
            ct++;
            last = end;
        }

    }

    return ct;
        
    }

    int main(){
        
    }


