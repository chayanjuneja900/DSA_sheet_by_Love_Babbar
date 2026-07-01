#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minValue(string &s, int k) {

        int n=s.size();

        if(k>=n)return 0;

        vector<int> alph_count(26,0);
        int maxi =0;

        for (int i = 0; i < n; i++)
        {
            alph_count[s[i]-'a']++;
            maxi = max(maxi,alph_count[s[i]-'a']);

        }
        
        vector<int> freq(maxi+1,0);

        int frq_max =maxi;

        for (int i = 0; i < 26; i++)
        {
            if(alph_count[i]>0){
                freq[alph_count[i]]++;
                
            }
        }

        while(k>0 && frq_max>0){

            if(freq[frq_max]>=k){
                freq[frq_max] -=k;
                freq[frq_max-1] += k;
                k=0;
            }
            else{
                k -= freq[frq_max];
                freq[frq_max-1] += freq[frq_max];

                freq[frq_max]=0;
                frq_max--;
            }
        }
        
        int result =0;

        for(int i=1;i<=maxi;i++){
            result += i*i *freq[i];

        }

        return result;


    }
};