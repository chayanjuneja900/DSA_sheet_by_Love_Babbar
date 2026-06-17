#include<bits/stdc++.h>
using namespace std;

 int setAllRangeBits(int N, int L, int R) {

    int temp= N;

    temp = temp | ((1<<R)-1);

    temp = temp & (~((1<<(L-1))-1));

    temp |= N;
      

    return temp;
    }

    int main(){

    }