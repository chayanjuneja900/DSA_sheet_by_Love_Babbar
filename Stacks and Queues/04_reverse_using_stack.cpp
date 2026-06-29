#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverse(const string& S) {

        stack <char> s;
        string ans;

        for(int i=0;i<S.size();i++){
            s.push(S[i]);
        }

        for (int i = 0; i < S.size(); i++)
        {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
        
    }
};

int main(){

}
