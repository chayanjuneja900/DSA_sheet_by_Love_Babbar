#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int x) {
      
    int n = mat.size();
    int m = mat[0].size();

    if(mat[n-1][m-1]< x) return false;

    bool is_true=false;


    for(int i=0;i<n;i++){
        if(mat[i][0]<=x && mat[i][m-1]>=x){

            for(int j=0;j<m;j++){
                if(mat[i][j]==x) {
                is_true =true;
                break;
            }
            }

        }
    }

    return is_true;
        
    }

    int main(){

    }