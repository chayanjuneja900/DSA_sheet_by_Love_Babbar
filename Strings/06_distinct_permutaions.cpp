#include<bits/stdc++.h>
using namespace std;

void recPerm(int index, string &s, set<string> &res){

    if(index==s.size()){
        res.insert(s);
        return;
    }

    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);

        recPerm(index+1,s,res);

        //backtracking
        swap(s[index],s[i]);
    }
}

vector<string> findPermutation(string &s) {
set<string>res;

recPerm(0,s,res);


return vector<string>(res.begin(),res.end());

        
}
int main(){

}    