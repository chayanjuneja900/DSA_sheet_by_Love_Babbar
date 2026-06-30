#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
      
        int n =gas.size();

        int start =0;

        int curr_gas=0;

        for(int i=0;i<n;i++){

            curr_gas =curr_gas+gas[i]-cost[i];


            if(curr_gas<0){
                start =i+1;
                curr_gas=0;
            }
        }

        curr_gas=0;

        for (int i = 0; i < n; i++)
        {
            int indx =(i+start)%n;

            curr_gas =curr_gas+gas[indx]-cost[indx];

            if(curr_gas<0){ return -1;}
        }
        return start;


    }
};

int main(){

}