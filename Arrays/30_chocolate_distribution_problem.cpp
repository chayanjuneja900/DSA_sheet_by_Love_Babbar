#include<bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int>& a, int m) {
       int n=a.size();

       int mn=INT_MAX;
        
       sort(a.begin(),a.end());

       for (int i = 0; i <= n-m; i++)
       {
        mn=min(mn,a[i+m-1]-a[i]);
       }

       return mn;
       
        
    }
int main(){

}