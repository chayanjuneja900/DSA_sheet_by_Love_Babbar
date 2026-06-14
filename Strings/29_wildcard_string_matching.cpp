#include<bits/stdc++.h>
using namespace std;

bool IS_match(int i,int j,string & s ,string &p){

    if(s[i]=='\0' && p[j]=='\0') return true;

    if(s[i]=='*'){
    while(s[i+1]=='*') {
        i++;
        } 
    }

    if(s[i]=='*' && s[i+1]!='\0' && p[j]=='\0') return false;

    if(s[i]=='?' || s[i]==p[j]) return IS_match(i+1,j+1,s,p);

    if(s[i]=='*'){
        return IS_match(i+1,j,s,p) || IS_match(i,j+1,s,p);

    }
    return false;





}
bool match(string wild, string pattern) {


    return IS_match(0,0,wild,pattern);
      

        
    }

    int main(){

    }