#include<bits/stdc++.h>
using namespace std;
  int countSetBits(int n) {

     if(n==0) return 0;

    int x= (int) log2(n);

    int till2x = x*(1<<(x-1));

    int msb_set = n- (1<<x) +1;

    int remaing_bits= n - (1<<x);


    int rest= countSetBits(remaing_bits);

    return till2x + msb_set + rest;


    }

    int main(){

    }