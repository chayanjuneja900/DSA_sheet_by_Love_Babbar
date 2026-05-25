#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> getPairs(vector<int>& arr)
  {

    int n=arr.size();
       
    vector<int> hsh(1e5+10,0);
    vector<vector<int>> ans;
    
    set<vector<int> >ans_2;

    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            if(hsh[arr[i]*-1]){
                vector<int> temp={arr[i],arr[i]*-1};
               ans_2.insert(temp);



            }
        }
        if(arr[i]>=0){
            hsh[arr[i]]=1;
            continue;
        }
        
    }
     for(int i=0;i<1e5+10;i++){
         hsh[i]=0;
     }

     reverse(arr.begin(),arr.end());
     
     for(int i=0;i<n;i++){
        if(arr[i]>0){
            hsh[arr[i]]=1;
        }
        else{
            if(hsh[arr[i]*-1]){
                vector<int> temp={arr[i],arr[i]*-1};
                ans_2.insert(temp);


            }
        }
    }
    for(auto &it:ans_2){
        ans.push_back(it);
    }
    return ans;
        
    }

int main(){

}