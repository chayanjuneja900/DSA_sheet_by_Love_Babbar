#include<bits/stdc++.H>
using namespace std;

bool is_possible(int i,int j,int n,int m){
    return i>=0 && j>=0  && i<n && j<m;
}

void bfs(vector<vector<char>> &mat,string &s,int to_check,int i,int j,int &ct,vector<pair<int,int>> & movements,vector<vector<int>> &visited){

    if(mat[i][j]!=s[to_check]) return;

    if(to_check==s.size()-1){
        ct++;
        return;
    }

    visited[i][j]=1;

    

    for(auto &it : movements){

        int x= i + it.first;
        int y= j + it.second;

       

        if(is_possible(x,y,mat.size(),mat[0].size())){
            if(visited[x][y]) continue;
            bfs(mat,s,to_check+1,x,y,ct,movements,visited);
        } 
}

visited[i][j]=0;
}


  int countOccurrence(vector<vector<char>> &mat, string &word) {

        vector<pair<int,int>> movements={{1,0},{0,1},{-1,0},{0,-1}};

        if(word.size()==0) return 0;

        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> visited(n, vector<int> (m,0));

        int ct=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==word[0]){
                    bfs(mat,word,0,i,j,ct,movements,visited)
                }
            }
        }
        return ct;
    }

    int main(){

    }