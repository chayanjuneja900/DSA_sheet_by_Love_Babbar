#include<bits/stdc++.h>
using namespace std;

// bool cmp(int a,int b){
//         return a>b;
//     }
    
// void nextPermutation(vector<int>& arr) {
        
//     int n=arr.size();

    
    

//     for(int i=2;i<=n;i++){
//         vector<int> temp=arr;

//         if(i>n) {sort(arr.begin(),arr.end());
//         break;
//     }

//         sort(temp.begin()+n-i,temp.end(),cmp);
//         if(temp==arr) continue;

//         auto it= upper_bound(arr.begin()+n-i,arr.end(),arr[n-i]);

//         swap(arr[n-i],*it);

//         i--;

//         sort(arr.begin()+n-i,arr.end());

//        break;

//     }
        
//     }

void nextPermutation(vector<int>& arr){
    int n=arr.size();

    int i=n-2;

    while(i>=0 && arr[i]>=arr[i+1]){
        i--;
    }

    

  if(i>=0) { int j=n-1;

    while(j>i && arr[i]>=arr[j]){
        j--;
        }
if(j>i){
        swap(arr[i],arr[j]);}
}
        reverse(arr.begin()+i+1,arr.end());
}




int main(){


}