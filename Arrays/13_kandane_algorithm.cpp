#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr){
    int res=arr[0];
    int max_Ending=arr[0];

    int n=arr.size();

    for(int i=1;i<n;i++){
        max_Ending=max(max_Ending+arr[i],arr[i]);

        res=max(res,max_Ending);
    }
    return res;

}
int main(){

    
}