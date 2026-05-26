#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& arr) {
      
    int N=1e5+10;
    int n=arr.size();
    vector<int>hsh(N,0);

    for(int i=0;i<n;i++){
        hsh[arr[i]]=1;
    }
    int res=0;
    int curr_ct=0;

    for(int i=0;i<N-1;i++){

        if(hsh[i]==1 ){
            curr_ct++;
            
        }
        else{
            res=max(res,curr_ct);
            curr_ct=0;
        }


    }
    return res;
        
    }

    int main(){

        vector<int>a={2, 6, 1, 9, 4, 5, 3};

        cout<<longestConsecutive(a)<<endl;

    }