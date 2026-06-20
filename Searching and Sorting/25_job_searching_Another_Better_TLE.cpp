#include<bits/stdc++.h
using namespace std;

int find(int i,vector<int> &parent){
    if(parent[i]==i) return i;
    
    return parent[i] = find(parent[i],parent);
}

  vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
      
    int n = deadline.size();

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        v.push_back({profit[i],deadline[i]});

    }

    sort(v.begin(),v.end(),[]( const pair<int,int> a,const pair<int,int> b){return a.first > b.first ;});

    int m = *max_element(deadline.begin(),deadline.end());

    int ct=0;

    vector<int> parent(m+1);

    for(int i=0;i<=m;i++){
        parent[i]=i;
        }


    int sum =0;

    for(int i=0;i<n;i++){

       auto aval_slot = find( v[i].second , parent);

       if(aval_slot >0){
        sum += v[i].first;
        ct++;
        
        parent [aval_slot] = find(aval_slot -1,parent);
       }


    }

    return {ct,sum};




        
    }
    int main(){
    
    }