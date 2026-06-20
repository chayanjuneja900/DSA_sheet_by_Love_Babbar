#include<bits/stdc++.h>
using namespace std;

bool is_possible(int t,vector<int> &rank , int p){

    int ct = 0;

    int n = rank.size();

    for(int i=0;i<n;i++){

        ct += (int)((sqrt(1 + (8.0*t/(double)rank[i]))-1)/2.0);

    }

    return (ct >= p);
}


int min_time(vector<int> &rank , int p){

    int lo = 0;
    int hi = 8 * 500 * 1001 ;

    int mid;

    while(lo<hi){

        mid = lo + (hi-lo)/2;
        if(is_possible(mid,rank,p)){
            hi=mid;
        }
        else {
            lo =mid+1;

        }
    }

    return lo;


}



int main(){

    int t;
    cin>>t;

    while(t--){
        int p;
        int l;
        cin>>p>>l;

        vector<int> rank(l,0);

       for (int i = 0; i < l; i++)
       {
            cin>>rank[i];
        }

        cout<<min_time(rank,p)<<endl;
    }
}