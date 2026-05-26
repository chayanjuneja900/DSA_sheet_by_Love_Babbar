#include<bits/stdc++.h>
using namespace std;

 void rearrange(vector<int>& arr) {
       int n=arr.size();

       int last_ind=n-1;
       int first_ind=0;
       
       sort(arr.begin(),arr.end());

       long long maxi=arr[n-1]+1;

       for (int i = 0; i < n; i++)
       {
        if(!(i&1)) {
            arr[i]+=(arr[last_ind]%maxi)*maxi;
            last_ind--;
        }
        else{
            arr[i]+=(arr[first_ind]%maxi)*maxi;
            first_ind++;
        }
       }

       for (int i = 0; i < n; i++)
       {
        arr[i]/=maxi;
        arr[i]=(int)arr[i];
       }
       
       
        
    }


int main(){

}