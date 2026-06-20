#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int> &trees ,int m,int h){

    long long wood =0;

    for (int i = 0; i < trees.size(); i++)
    {
        if(trees[i]>h){
            wood += trees[i]-h;
        }
    }

    return (wood >= m);
    
}

int max_height( vector<int> &trees , int m){

    int n= trees.size();

    int lo = 0;
    int hi = (int) 1e9;

    int mid ;

    while(hi-lo >1){

        mid =(hi+lo)/2;

        if(is_possible(trees, m, mid)){
            lo = mid;
        }
        else{
            hi=mid-1;
        }
    }

    if(is_possible(trees,m, hi)) return hi;
    else return lo;


}


int main(){

    int N,m;
    cin>>N>>m;

    vector<int> trees(N);
    for (int i = 0; i < N; i++)
   {
        cin>>trees[i];

    }

    
    cout<<max_height(trees,m)<<endl;
}