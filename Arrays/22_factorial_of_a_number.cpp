#include<bits/stdc++.h>
using namespace std;
 vector<int> factorial(int n) {
        
    vector<int>ans(1,1);

    while(n>0){
        int carry=0;
        int res;
        int size=ans.size();

        for(int i=0;i<size;i++){
            res=(ans[i]*n)+carry;
            carry=res/10;
            ans[i]=res%10;

        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        n--;
    }
    reverse(ans.begin(),ans.end());

    return ans;
        
    }

int main(){

    vector<int>a;
    a=factorial(6);

    for(auto &it :a){
        cout<<it<<" ";
    }

}