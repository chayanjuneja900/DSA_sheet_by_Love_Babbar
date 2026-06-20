#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &a,vector<int> &b){

    int n=a.size();
    int m=b.size();

    int i=0;
    int j=0;

    vector<int> res;

    while(i<n && j<m){
        if(a[i]<b[j]) res.push_back(a[i++]);
        else{
            res.push_back(b[j++]);
        }
    }

    while(i<n){
        res.push_back(a[i++]);
    }
    while(j<m){
        res.push_back(b[j++]);
    }

    return res;
}

 int kthElement(vector<int> &a, vector<int> &b, int k) {

    vector<int> merged = merge(a,b);


    return merged[k-1];


    }


    int main(){

    }