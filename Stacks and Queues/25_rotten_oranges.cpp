#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

  bool is_possible(int i,int j, vector<vector<int>>& mat){
    int n =mat.size();
    int m =mat[0].size();

    return(i>=0 && j>=0 && i<n && j<m);
  }


  void dfs(vector<vector<int>> &mat,int i,int j,int time){

    int n =mat.size();
    int m =mat[0].size();

    mat[i][j]=time;

    vector<pair<int,int>> movements ={ {1,0},{0,1},{-1,0},{0,-1}};

    for(auto &mov : movements ){
        int x = i+ mov.first;
        int y = j+ mov.second;


        if(is_possible(x,y, mat) && (mat[x][y]==1 || mat[x][y]>time+1)){
            dfs(mat,x,y,time+1);
        }
    }
  }


    int orangesRot(vector<vector<int>>& mat) {

        int n =mat.size();
        int m =mat[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(mat[i][j]==2){
                    dfs(mat,i,j,2);
                }
            }
            
        }
        

        int time_taken =0;

        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<m;j++){

                if(mat[i][j]==1) return -1;

                time_taken =max(time_taken,mat[i][j]-2);
            }
        }
        

        return time_taken;




        
    }
};