#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(vector<int>& arr) {
        
    int n=arr.size();

    long long prefix_sum=0;

    unordered_set<long long> s;

    for (int i = 0; i < n; i++)
    {
        prefix_sum+=arr[i];

        if(prefix_sum==0) return true;

        auto it=s.find(prefix_sum);
        if(it!= s.end()) return true;

        s.insert(prefix_sum);
    }
    return false;
    
        
    }


int main(){

    vector<int>a={4,2,0,1,6};

    if(subArrayExists(a)) cout<<"true"<<endl;
    else cout<<"false"<<endl;


}