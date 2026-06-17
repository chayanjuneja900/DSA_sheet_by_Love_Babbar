#include<bits/stdc++.h>
using namespace std;

 int findPosition(int n) {


        if(n==0) return -1;

        int x= (int) log2(n) +1;


        int indx= -1;

        int ct=0;

        for(int i=0;i<x;i++){

            if(n & (1<<i)){ 
                ct++;
                indx=i+1;
            }

        }

        if(ct==1) return indx;
        else return -1;


        
    }


    int main(){}