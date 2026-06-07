#include<bits/stdc++.h>
using namespace std;

int binary_exp(int a,int n){
    if(n==0)return 1;

    int res= binary_exp(a,n/2);

    

    if ((n%2)!=0) return a*res*res;
    else{
        return res*res;
    }
    
}

vector<string> AllPossibleStrings(string s) {

    set<string> ans;
    vector<string>ans2;
      
    int n=s.size();
    int number=binary_exp(2,n);

    for (int i = 0; i < number; i++)
    {
        string res;
        
        for(int j=0;j<n;j++){

            if((i>>j)&1) res.push_back(s[j]);

        }

        if(res.size()){
        ans.insert(res);
    }
    }

    for(auto &it : ans){
        ans2.push_back(it);
    }

    return ans2;


    
        
    }

int main(){

   
    
}