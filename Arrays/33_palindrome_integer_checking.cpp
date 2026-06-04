#include<bits/stdc++.h>
using namespace std;

string integer_to_string(int n){
    string s;
    while(n>0){
        int k=n%10;

        s.push_back(k+'0');

        n/=10;

    }

    reverse(s.begin(),s.end());
    return s;
}

bool is_integer_palindrome(int n){
    string s=integer_to_string(n);

    bool is_true=true;

    int k=s.size();

    for (int i = 0; i < k/2; i++)
    {
        if(s[i]!=s[k-i-1]) {is_true=false;
        break;
    }
    }
    return is_true;
    
}

bool isPalinArray(vector<int> &arr) {

    bool ans=true;
       
    for (int i = 0; i < arr.size(); i++)
    {
       if(is_integer_palindrome(arr[i])==false) {ans=false;
    break;
 }
    }
    return ans;
    
        
    }

    int main(){
        
    }