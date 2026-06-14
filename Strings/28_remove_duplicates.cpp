#include<bits/stdc++.h>
using namespace std;
 string removeDuplicates(string& s) {
        int n=s.size();

        string ans;

        for(int i=0;i<n;i++){
            if(i<n-1){
                if(s[i]==s[i+1]) continue;
            }
            if(i==n-1) ans.push_back(s[i]);

            else{
                ans.push_back(s[i]);
                
            }

            
        }

        return ans;
    }
int main(){

}    