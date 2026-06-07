#include<bits/stdc++.h>
using namespace std;
int romanToDecimal(string &s) {
       
    unordered_map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int n=s.size();

    int i=0;

    int ans=0;

    while(i<n){

        
        if(i<n-1){
            if(m[s[i]]>= m[s[i+1]]){
                ans += m[s[i]];
                
            }
            else{
                ans += m[s[i+1]]-m[s[i]];
                i++;
            }
        }
        else{
            ans+= m[s[i]];
        }
        i++;
    }
    return ans;
        
    }
int main(){

}    