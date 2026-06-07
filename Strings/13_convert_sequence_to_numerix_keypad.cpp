#include<bits/stdc++.h>
using namespace std;
string printSequence(string S) {
    
    int n=S.size();

    string keypad[]={ "2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};

    string ans="";

    for (int i = 0; i < n; i++)
    {
        if(S[i]==' ') ans+="0";

        else{ 
            int num= S[i]-'A';
            
            ans+= keypad[num];
        
        }
    }
    return ans;   
}

int main(){

}