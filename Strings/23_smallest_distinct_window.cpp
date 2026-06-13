#include<bits/stdc++.h>
using namespace std;
 int findSubString(string& str) {
       int n=str.size();

       if(n==0) return 0;

       vector<int> vis(26,0);

       int dist=0;

       vector<int> num_times(26,0);

       for(int i=0;i<n;i++){

        if(vis[str[i]-'a']) continue;

        dist++ ;
        vis[str[i]-'a']= 1 ;
       }
       if(dist==1) return 1;

       int start=0;
       int end=0;

       int ct=0; 

       num_times[str[0]-'a']= 1 ; 
       ct++;

       int res=INT_MAX;


       while(end<n && start<n){
        if(ct==dist){

            if(num_times[str[start]-'a']==1) {
                res = min(res,end-start+1);

                ct--;

                num_times[str[start++]-'a']--;

               
        }
        else{
            num_times[str[start]-'a']--;

            start++;
            continue;
        }
        }

        end++;

        if((end<n)){

        if( num_times[str[end]-'a']==0) ct++;

        num_times[str[end]-'a']++;
       }
    }

    return res;

        
    }
int main(){

}    