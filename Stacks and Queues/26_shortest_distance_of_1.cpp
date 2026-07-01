#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<vector<int>> &grid,int i,int j){

    int n =grid.size();
    int m =grid[0].size();

    return (i>=0 && j>=0 && i< n && j<m);

}


void dfs(vector<vector<int>>& grid,int i,int j,int d,vector<vector<int>>& ans,int par1,int par2,vector<vector<int>> &visited){

    int n =grid.size();
    int m =grid[0].size();
    visited[i][j]=1;

    vector<pair<int,int>> movements = {{1,0},{0,1},{-1,0},{0,-1}};

    for(auto &mov :movements){

        int x = i + mov.first;
        int y = j + mov.second;

        if(is_possible(grid,x,y) && grid[x][y]==1 && visited[x][y]==0){
             ans[par1][par2]=min(ans[par1][par2],d+1);
}
        if(is_possible(grid,x,y) && grid[x][y]==0 && visited[x][y]==0  ){
            dfs(grid,x,y,d+1,ans,par1,par2,visited);
        }
        else{
            if(is_possible(grid,x,y) && ans[par1][par2]>d+1 && visited[x][y]==0){
                ans[par1][par2]=d+1;
            }
        }



    }
visited[i][j]=0;



}

class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {

         int n =grid.size();
         int m =grid[0].size();


         vector<vector<int>> ans(n,vector<int>(m,INT_MAX));



         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vector<vector<int>> visited(n,vector<int>(m,0));


                if(grid[i][j]==1) ans[i][j]=0;

                else{
                    dfs(grid,i,j,0,ans,i,j,visited);
                }
            }
         }

return ans;
        
        
    }
};

int main(){

}