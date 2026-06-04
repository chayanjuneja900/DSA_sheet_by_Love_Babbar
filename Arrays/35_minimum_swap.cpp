#include<bits/stdc++.h>
using namespace std;

 int minSwap(vector<int>& arr, int k) {

    int n=arr.size();

    vector<int> hsh(n,0);

    int good=0;

    for (int i = 0; i < n; i++)
    {
       if(arr[i]<=k){
        hsh[i]=1;
        good++;
       }
    }
    
    if(good==0|| good==1) return 0;

    int bad_ele=0;

    for (int i = 0; i < good; i++)
    {
        if(arr[i]>k) bad_ele++;

    }

    int front=good-1;
    int back=0;

    int ans=good;

    ans=min(ans,bad_ele);

    while(front < n-1 && back <n){

        

        if(hsh[back++]==0) bad_ele--;
        

        

        if(hsh[++front]==0) bad_ele++;

        ans=min(ans,bad_ele);
    }


    return ans;
    
    
 }

int main(){

}