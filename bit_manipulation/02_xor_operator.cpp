#include<bits/stdc++.h>
using namespace std;
vector<int> singleNum(vector<int>& arr) {
        int n=arr.size();

        int step=0;

        for (int i = 0; i < n; i++)
        {
            step ^= arr[i];

        }

        step = step & (-1*step);

        int number_1=0;
        int number_2=0;

        for (int i = 0; i < n; i++)
        {
          if(step & arr[i]){ number_1 ^= arr[i];}
          else{ number_2 ^= arr[i];}
        }

        vector<int> ans;

        ans.push_back(min(number_1,number_2));
        ans.push_back(max(number_1,number_2));

        return ans;
        
    }
    
int main(){

}    