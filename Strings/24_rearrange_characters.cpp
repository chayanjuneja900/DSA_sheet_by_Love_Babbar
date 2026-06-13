#include<bits/stdc++.h>
using namespace std;
string rearrangeString(string s) {
       unordered_map<char,int> m;

        int n=s.size();

        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;   
        }

        auto mx = max_element(m.begin(),m.end(),[](const pair<char,int> &a,const pair<char,int> &b) {return a.second<b.second;});

        if(mx==m.end()) return "";

        auto x= *mx;

        m.erase (mx);

        

        if(x.second > (n+1)/2) return "";

         int i=0;

         while(i<n && x.second>0 ){
            s[i]=x.first;
            i+=2;
            x.second--;
         }




       

           

        for(auto & it:m){

            auto c= it.first;
            auto freq= it.second;

           

            
            while(freq>0){

                 if(i>=n) i=1;

                s[i]=c;
                i+=2;
                freq--;

            }
            



        
    }

    return s;
        
        
    }
int main(){

}    