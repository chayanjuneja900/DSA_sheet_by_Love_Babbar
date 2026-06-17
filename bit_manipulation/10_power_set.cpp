#include<bits/stdc++.h>
using namespace std;
 vector<string> powerSet(string &s) {

    int n=s.size();

    int sz= 1<<n;

    vector<string> ans;

    for(int i=0;i<sz;i++){

        string temp;

        for(int j=0;j<n;j++){
            if(i & (1<<j)) temp.push_back(s[j]);

        }

        ans.push_back(temp);
    }

    sort(ans.begin(),ans.end());

    return ans;
        
    }

    int main(){
        
    }