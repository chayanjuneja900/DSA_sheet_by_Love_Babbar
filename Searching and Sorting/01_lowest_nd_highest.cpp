#include<bits/stdc++.h>
using namespace std;
vector<int> find(vector<int>& arr, int x) {


    auto lo = lower_bound(arr.begin(),arr.end(),x);

    if(lo == arr.end() || *lo!= x) return {-1,-1};

    auto mn = lo - arr.begin();


    auto mx= (upper_bound (arr.begin(),arr.end(),x) - arr.begin())-1;

    return {mn,mx};


        
    }

    int main(){

    }