#include<bits/stdc++.h>
using namespace std;
 int solve(int n, string s) {
        vector<int> hsh(26,0);

        int ans=0;
        int ct=0;

        vector<int> non_attended(26,0);


        for(int i=0;i<s.size();i++){
            if(hsh[s[i]-'A']) {
                ct--;
                hsh[s[i]-'A']--;
                continue;
            
            }

            if(ct==n) {

                non_attended[s[i]-'A']=1;
                continue;
                
                }

                if(hsh[s[i]-'A']==0){

                    if(non_attended[s[i]-'A']==1) continue;

                    hsh[s[i]-'A']==1;
                    ct++;
                }


        }
        

        for(int i=0;i<26;i++){

            if(non_attended[i]) ans++;


        }
        return ans;
        
    }

    int main(){}