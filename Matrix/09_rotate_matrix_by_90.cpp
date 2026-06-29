#include<bits/stdc++.h>
using namespace std;
 void rotateMatrix(vector<vector<int>>& mat) {

        int n= mat.size();

        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-1-i;j++){
                int temp = mat[i][j];
                mat[i][j] = mat[j][n-i-1];
                mat[j][n-i-1]=mat[n-i-1][n-1-j];
                mat[n-1-i][n-1-j] = mat [n-1-j][i];
                mat[n-1-j][i]=temp;
            }
        }

        

        
    }
    int main(){

    }