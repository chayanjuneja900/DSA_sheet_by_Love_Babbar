#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minValue(string &s, int k) {


        
        int n =s.size();

        if(k>=n) return 0;

        vector<int> freq(26,0);

        for (int i = 0; i < n; i++)
        {
            freq[s[i]-'a']++;
        }

        multiset<int> st;

        for(auto & f : freq){

            if(f>0){
                st.insert(f);
            }
        }

        while(k-- && st.size()>0){
            int top = *(--st.end());

            st.erase(--st.end());
            if(top>1){

                st.insert(top-1);

            }

        }

        int ans=0;

        for(auto &it : st){
            ans += it*it;
        }

        return ans;
        
        
    }
};

int main(){

}