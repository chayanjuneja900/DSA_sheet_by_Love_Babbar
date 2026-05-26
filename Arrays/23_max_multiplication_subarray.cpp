#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr) {
       //same as kadanes algo for summation

       //is case mei multiply krna h and multiplying a negative number makes. min vlue to be greates so hme dono ka track rkhna pda min and max ka 

       int max_value=arr[0];
       int min_value=arr[0];

       int res=arr[0];

       int n=arr.size();

       for(int i=1;i<n;i++){

        if(arr[i]<0) swap(min_value,max_value);

        max_value=max(arr[i],max_value*arr[i]);
        min_value=min(arr[i],min_value*arr[i]);

        res=max(res,max_value);


       }
       return res;
        
    }

    int main(){
        vector<int> a={-2,6,-3,-10,0,2};
        cout<<maxProduct(a)<<endl;
    }