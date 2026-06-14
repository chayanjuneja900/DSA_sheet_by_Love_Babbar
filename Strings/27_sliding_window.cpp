#include<bits/stdc++.h>
using namespace std;

 string minWindow(string &s, string &p) {
        int len1=s.size();
        int len2=p.size();

        if(len1<len2) return "";

        vector<int> count_s(26,0);
        vector<int> count_p(26,0);

        for(int i =0;i<len2;i++){
            count_p[p[i]-'a']++;
        }

        int ct=0;
        int start=0;
        int start_indx=-1;

        int end=0;

        int min_len=INT_MAX;
        int len=0;

        while(end<len1 && start< len1){

            count_s[s[end]-'a']++;

            if(count_s[s[end]-'a']<=count_p[s[end]-'a']) ct++;

            end++;

            if(ct==len2){
                while(count_s[s[start]-'a'] > count_p[s[start]-'a'] || count_p[s[start]-'a']==0){
                   if(count_s[s[start]-'a'] > count_p[s[start]-'a']){ 
                    count_s[s[start]-'a']--;
                }
                    start++;
                }

                len= end-start;

                if(len<min_len){
                    min_len=len;

                    start_indx=start;
                }


            }




        }
        if(start_indx==-1) return "";

        return s.substr(start_indx,min_len);
        
    }
int main(){

}