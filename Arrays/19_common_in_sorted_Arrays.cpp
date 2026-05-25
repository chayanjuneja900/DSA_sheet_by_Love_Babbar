#include<bits/stdc++.h>
using namespace std;
// vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {

//     int n=1e5+10;

//     vector<int>hsh_1(n,0);
//     vector<int>hsh_1_n(n,0);
//     vector<int>hsh_2(n,0);
//     vector<int>hsh_2_n(n,0);
//     vector<int>hsh_3(n,0);
//     vector<int>hsh_3_n(n,0);

//     for(int i=0;i<a.size();i++){
//         if(a[i]<0){
//             hsh_1_n[-1*a[i]]=1;
//             continue;
//         }
//         hsh_1[a[i]]=1;
//     }
//     for(int i=0;i<b.size();i++){
//          if(b[i]<0){
//             hsh_2_n[-1*b[i]]=1;
//             continue;
//         }
//         hsh_2[b[i]]=1;
//     }
//     for(int i=0;i<c.size();i++){
//          if(c[i]<0){
//             hsh_3_n[-1*c[i]]=1;
//             continue;
//         }
//         hsh_3[c[i]]=1;
//     }

//     vector<int> ans;

//       for(int i=0;i<n;i++){
//         if(hsh_1_n[i] && hsh_2_n[i] && hsh_3_n[i] ){
//             ans.push_back(-1*i);
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(hsh_1[i] && hsh_2[i] && hsh_3[i] ){
//             ans.push_back(i);
//         }
//     }

//     sort(ans.begin(),ans.end());
    
    
//     return ans;
       
        
//     }

//by three pointer method

vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c){

    int n1=a.size(),n2=b.size(),n3=c.size();

    int i=0,j=0,k=0;

    vector<int> ans;

    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
        ans.push_back(a[i]);
        i++;
        j++;
        k++;

        while(i<n1 && a[i]==a[i-1]){ i++;}
        while(j<n2 && b[j]==b[j-1]){j++; }
        while(k<n3 && c[k]==c[k-1]){ k++;}
        }

    
    else{
        if(a[i]<b[j]){i++;}
        else{
            if(b[j]<c[k]) j++;
            else k++;
        }
    }
    }

    return ans;
    

}


    int main(){

    }