#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr,int l,int m,int r){
    int l_size=m-i+1;
    int r_size=r-m;

    vector<int> R(r_size);
    vector<int> L(l_size);

    for(int i=0;i<l_size;i++){
        L[i]=arr[i+l];
    }
     for(int i=0;i<r_size;i++){
        R[i]=arr[mid+1+i];

    }

    int l_ind=0, r_ind=0,k=l;

    int ct=0;

    while(l_ind < l_size && r_ind < r_size){

        if(L[l_ind]<=R[r_ind]){
            arr[k++]=L[l_ind++];
        }
        else{
            ct+= (l_size-l_ind);
            arr[k++]=R[r_ind++];
        }

    }

    while(l_ind<l_size){
        arr[k++]=L[l_ind++];
    }
while(r_ind<r_size){
        arr[k++]=R[r_ind++];
    }

    return ct;

}

int invCount(vector<int> &arr,int l,int r){
    int res=0;
    
    if(l<r){
        int mid=(l+r)/2;
        res+=invCount(arr,l,mid);
        res+=invCount(arr,mid+1,r);

        res+=merge(arr,l,mid,r);


    }
    return res;

}
 int inversionCount(vector<int> &arr) {

    int n=arr.size();

    return invCount(arr,0,n-1);       
}


int main(){

}