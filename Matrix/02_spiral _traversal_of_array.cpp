#include<bits/stdc++.h>
using namespace std;


bool is_possible(int x,int y,vector<vector<int>>&mat,vector<vector<int>>&vis){
    if(x<mat.size() && y < mat[0].size() && x>=0 && y>=0){
        if(vis[x][y]!=1) return true;
    }
    return false;
}


vector <int> give_vector(vector<vector<int>> &mat){

    int n=mat.size();
    int m =mat[0].size();

    int ct =0;

    vector<pair<int,int>> movements = {{0,1},{1,0},{0,-1},{-1,0}};

    int i=0,j=0;

    vector<int> ans;

    ans.push_back(mat[i][j]);
    ct++;

    vector<vector<int>> vis (n,vector<int>(m,0));

    vis[i][j]=1;

    while(true){
        if(ct == n*m) break;

        for(auto &it :movements){

            if(is_possible(i+it.first,j+it.second,mat,vis)){
            i = i + it.first;
            j = j + it.second;
        }
        else{continue;}

            while(is_possible(i,j,mat,vis)){

                ct++;
                ans.push_back(mat[i][j]);
                vis[i][j]=1;


                 if(is_possible(i+it.first,j+it.second,mat,vis)){
                    i=i+it.first;
                    j=j+it.second;
                 }

                 else{
                    break;
                 }

            }

        }

        
    }
    return ans;
}


vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        

    return  give_vector(mat);

        
    }

    int main(){

    }