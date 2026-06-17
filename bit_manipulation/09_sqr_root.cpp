#include<bits/stdc++.h>
using namespace std;
 int floorSqrt(int n) {


    double err = 1e-3;

      
    double lo=1;
    double hi=n;
    double mid;


    while(hi-lo > err){

       mid=(hi+lo)>>1;

        if(mid * mid >n ) hi=mid;
        else
        {
           lo=mid;
        }

       
    }
      return (int) hi;  
    }

    

    int main(){

    }