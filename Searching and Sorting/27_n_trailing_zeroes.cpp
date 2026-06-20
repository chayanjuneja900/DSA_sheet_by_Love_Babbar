#include<bits/stdc++.h>
using namespace std;

 bool is_possible(int p,int n){

    int factor = 5;
    int ct= 0;

    while(p>= factor){
        ct += p/factor;
        factor *= 5;
    }

    return (ct>= n);


}
 int findNum(int n) {
       
    int lo =0;
    int hi =5*n;

    int mid;

    while(lo<hi){

        mid =(hi+lo)/2;

        if(is_possible(mid,n)) {
            hi =mid;
        }
        else{
            lo =mid+1;

        }


    }

    return lo;

        
    }

    int main(){

    }