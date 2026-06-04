#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int> &arr) {

    int n=arr.size();

       int left=1;
       int right= n-2;

       int lmax=arr[left-1];
       int rmax=arr[right+1];

       int res=0;

      while(left<=right){
        if(lmax<=rmax){
            res+=max(0,lmax-arr[left]);
            lmax=max(lmax,arr[left]);
            left++;

        }
        else{
            res+=max(0,rmax-arr[right]);
            rmax=max(rmax,arr[right]);
            right--;
        }

      }

      return res;
       
        
    }

int main(){

    vector<int> a={3, 0, 2, 0, 4};
    cout<<maxWater(a)<<endl;

}