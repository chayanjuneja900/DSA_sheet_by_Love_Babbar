#include<bits/stdc++.h>
using namespace std;
bool isSubset(vector<int> &a, vector<int> &b) {
    
    int N=1e6+10;

    unordered_map<int,int> hsh_a;
   

    int n1=a.size();
    int n2=b.size();

    for(int i=0;i<n1;i++){
        hsh_a[a[i]]++;
    }

    bool is_true=true;

    for(int i=0;i<n2;i++){
       if(hsh_a[b[i]]==0) {
        is_true=false; 
        break;
    }
    hsh_a[b[i]]--;

    }

    

    return is_true;
      
    }


int main(){

}