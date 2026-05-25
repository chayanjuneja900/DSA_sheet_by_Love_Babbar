#include<bits/stdc++.h>
using namespace std;

 int stockBuySell(vector<int> &arr) {

    int n=arr.size();

    bool is_buy=false;
    int curr_buy=0;

    int profit=0;

    for(int i=0;i<n;i++){
        if(!is_buy){
            curr_buy=arr[i];
            is_buy=true;
        }
       if(i==n-1 && is_buy==true){
        profit+=arr[i]-curr_buy;
        break;
       }
        
            if(arr[i]>arr[i+1] && is_buy==true){
                
                profit+=arr[i]-curr_buy;
                is_buy=false;
            }
        
    }
    return profit;
       
    
        
    }

    int main(){

        int n;
        cin>>n;

        while(n--)

    }