#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices, int k) {
       int n=prices.size();

    bool is_buy=false;
    int curr_buy=0;

    vector<int> profits;

    for(int i=0;i<n;i++){
        if(!is_buy){
            curr_buy=prices[i];
            is_buy=true;
        }
       if(i==n-1 && is_buy==true){
        profits.push_back(prices[i]-curr_buy);
        break;
       }
        
            if(arr[i]>arr[i+1] && is_buy==true){
                
                profits.push_back([i]-curr_buy);
                is_buy=false;
            }
        
    }
    int profit=0;

    int size=profits.size();

    if(size<k){

        for (int i = 0; i < size; i++)
        {
            profit+= profits[i];
        }
    }
    else{
        sort(profits.begin(),profits.end());
        for(int i=size-k;i<size;i++){
            profit+= profits[i];
        }
    }
    return profit;
    
        
    }
    int main(){
        
    }