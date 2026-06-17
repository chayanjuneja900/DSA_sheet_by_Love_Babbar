#include<bits/stdc++.h>
using namespace std;
 long long divide(long long dividend, long long divisor) {
       
    if(dividend==INT_MIN && divisor==-1)
    return INT_MAX;

    int sign= ((dividend<0) ^ (divisor<0))? -1 : 1;


    dividend=abs(dividend);
    divisor=abs(divisor);

    long long quotient=0;


    for(int i=31;i>=0;i--){

        if((divisor<<i) <= dividend){
            quotient |= (1ll<<i);

            dividend-=(divisor<<i);

        
        }

        
    }


    return sign*quotient;
        
    }

    int main(){
        
    }