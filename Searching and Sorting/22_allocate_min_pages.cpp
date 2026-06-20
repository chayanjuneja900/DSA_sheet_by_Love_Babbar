#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int> &arr,int k,int page_limit){
    int ct = 1;
    int sum= 0;

    

    for(int i=0;i<arr.size();i++){
        if(sum +arr[i]>page_limit){
            ct++;
            sum =arr[i];
        }
        else{
            sum += arr[i];
        }
    }

    return (ct<=k);



}

 int findPages(vector<int> &arr, int k) {


        int n=arr.size();

        if(k>n) return -1;

        int lo =*max_element(arr.begin(),arr.end());
        int hi = accumulate(arr.begin(),arr.end(),0);

        int mid;


        while(hi - lo > 1){

            mid=(hi+lo)/2;

            if(is_possible(arr,k,mid)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }

        }

        if(is_possible(arr,k,lo)) return lo;
        else return hi;


        
    }



    int main(){

    }