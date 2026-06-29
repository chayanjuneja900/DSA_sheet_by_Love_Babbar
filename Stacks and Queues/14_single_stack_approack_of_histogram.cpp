#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMaxArea(vector<int> &arr) {

        int n=arr.size();

        stack<int> s;

        int mx=INT_MIN;


        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]){

                int indx= s.top();
                int width =arr[indx];
                s.pop();

                int area = !s.empty() ? (i-s.top()-1)*width : i*width;

                mx= max(area,mx);
            }  
             s.push(i);
            }

            while(!s.empty()){

                int indx =s.top();

                int width=arr[indx];
                s.pop();

                int area = !s.empty() ? (n-s.top()-1)*width : n*width;

                mx=max(area,mx);
            }

return mx;

           
        }
    };
