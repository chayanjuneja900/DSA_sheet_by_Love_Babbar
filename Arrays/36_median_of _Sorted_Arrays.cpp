#include<bits/stdc++.h>
using namespace std;

double medianOf2(vector<int>& a, vector<int>& b) {
        
    int size_a=a.size();
    int size_b=b.size();

    int a_ind=0;
    int b_ind=0;

    vector<int> ans;

    while(a_ind<size_a && b_ind<size_b){
        if(a[a_ind]<b[b_ind]){
            ans.push_back(a[a_ind++]);  
        }
        else{
            ans.push_back(b[b_ind++]);
        }
    }

    while(a_ind<size_a){
        ans.push_back(a[a_ind++]);
    }

    while(b_ind<size_b){
        ans.push_back(b[b_ind++]);
    }

    int len=ans.size();

    double res=0;

    int ind=len/2;

    if(len%2==0){

        res=((double)ans[ind] +(double) ans[ind-1])/(double) 2;

    }
    else{
        res=(double) ans[ind];
    }

    return res;
        
    }


    int main(){

    }