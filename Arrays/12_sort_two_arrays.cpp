#include<bits/stdc++.h>
using namespace std;

/*void mergeArrays(vector<int>& a, vector<int>& b) {
       int i=0,j=0;
       int n=a.size();
       int m=b.size();

       for(int i=0;i<n;i++){
        if(a[i]>b[j]) swap(a[i],b[j]);
        sort(b.begin(),b.end());
       }

        
    }*/
   void mergeArrays(vector<int>& a, vector<int>& b){
    int n=a.size();
    int m=b.size();

    int i=0,j=0;

   vector<int> merged;

   while(i<n && j<m){
    if(a[i]<b[j]) merged.push_back(a[i++]);
    else merged.push_back(b[j++]);

  }
  while(i<n) merged.push_back(a[i++]);
  while(j<m) merged.push_back(b[j++]);

  for(int k=0;k<n;k++){
    a[k]=merged[k];
  }
  for(int k=n;k<n+m;k++){
    b[k-n]=merged[k];
  }
    


   }

    int main(){

        int n,m;
        cin>>n>>m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        mergeArrays(a,b);
        
      for(auto &it: a){
        cout<<it<<" ";
      }
      cout<<endl;

      for(auto &it: b){
        cout<<it<<" ";
      }
      cout<<endl;

        

    }