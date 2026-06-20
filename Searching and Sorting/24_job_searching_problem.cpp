#include<bits/stdc++.h>
using namespace std;
 vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
      
    int n = deadline.size();

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        v.push_back({profit[i],deadline[i]});

    }

    sort(v.begin(),v.end(),[]( pair<int,int> a, pair<int,int> b){return a.first > b.first ;});

    int m = *max_element(deadline.begin(),deadline.end());

    int ct=0;
    vector<int> slots(m+1,-1);
    int sum =0;

    for(int i=0;i<n;i++){

        if(ct == m) return {ct,sum};



       for(int j=v[i].second;j>0;j--){
        if(slots[j]==-1) {
            slots[j]= i;
            sum += v[i].first;
            ct++;
            break;
        }
       }
    }

    return {ct,sum};




        
    }

    int main(){

    }