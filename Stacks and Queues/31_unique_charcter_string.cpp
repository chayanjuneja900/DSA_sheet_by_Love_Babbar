#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string firstNonRepeating(string &s) {
       int n=s.size();

       queue<char> q;

       string ans;

       vector<int> freq(26,0);

       for (int i = 0; i < n; i++)
       {
        freq[s[i]-'a']++;

        q.push(s[i]);

       

       while(!q.empty() && freq[q.front()-'a']>1 ){
        q.pop();
       }

       if(q.empty()){
        ans.push_back('#');
       }
       else ans.push_back(q.front());
       }
       return ans;
        
    }
};

int main(){

}