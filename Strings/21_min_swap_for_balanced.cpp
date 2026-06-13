#include<bits/stdc++.h>
using namespace std;

int minimumNumberOfSwaps(string& s) {
      
    int n=s.size();

    int swap=0;
    int imbalance=0;
    int left=0;
    int right=0;

    for (int i = 0; i < n; i++)
    {
      if(s[i]=='['){
        left++;

        if(imbalance>0){
            swap+= imbalance;
            imbalance--;
        }
      }
      else{
        right++;

        imbalace = (right-left);
      }
    }

    return swap;
    
    }

int main(){

}    