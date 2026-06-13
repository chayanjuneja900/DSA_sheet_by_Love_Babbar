#include<bits/stdc++.h>
using namespace std;

string firstRepChar(string s) {

    int n=s.size();

    vector<int> hsh(26,0);

    string ans;

    for (int i = 0; i < n; i++)
    {
        if(hsh[s[i]-'a']){ ans.push_back(s[i]);
        break;
    }

    hsh[s[i]-'a']=1;

    }

    if(!ans.size()) {ans.push_back('-');
        ans.push_back('1');
    }

    return ans;
    
    }
 
int main(){

}    