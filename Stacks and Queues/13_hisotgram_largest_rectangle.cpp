#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMaxArea(vector<int> &arr) {

        int n=arr.size();
        
        vector<int> pse(n,-1);
        vector<int> nse(n,n);

        stack<int> s;

        for(int i =0;i<n;i++){
            if(s.empty()){ 
                s.push(i);
                continue;
        }

        while(!s.empty() && arr[s.top()]>= arr[i]){
            s.pop();
        }

        if(!s.empty() && arr[s.top()]< arr[i]){
            pse[i]=s.top();
        }
        s.push(i);
    }
    
    s =stack<int> ();
    

     for(int i =n-1;i>=0;i--){
            if(s.empty()){ 
                s.push(i);
                continue;
        }

        while(!s.empty() && arr[s.top()]>= arr[i]){
            s.pop();
        }

        if(!s.empty() && arr[s.top()]< arr[i]){
            nse[i]=s.top();
        }
        s.push(i);
    }


    int mx = INT_MIN;

    int curr_ar;

    for(int i=0;i<n;i++){

        curr_ar =arr[i];

        int k =(i-pse[i]-1+nse[i]-i-1)*curr_ar;

        curr_ar += k;

        mx =max(curr_ar,mx);

    }
    return mx;
        
    }
};


int main(){

}