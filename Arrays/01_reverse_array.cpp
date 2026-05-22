#include<bits/stdc++.h>
using namespace std;


    string reverseString(string& s) {
        string ans;

	for(int i=s.size()-1;i>=0;i--){
		ans.push_back(s[i]);
	}
	s=ans;
	return s;
        
    }

    int main(){

        string s;
        cin>>s;

        cout<<reverseString(s)<<endl;
    }
