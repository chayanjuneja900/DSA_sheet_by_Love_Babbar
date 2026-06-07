#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<vector<char>> &mat, int i,int j){
    return  i>=0 && j >=0 &&  i<mat.size() && j<mat[0].size();
}

void dfs(vector<vector<char>> &mat, string &word,int i,int j, vector<vector<int>> &ans,vector<pair<int,int>> &movements){

    int n=mat.size();

    int m=mat[0].size();
     if(word.size()==1){
            ans.push_back({i,j});
        }

        else{

    for(auto &it :movements){

        int mov_x=it.first;
        int mov_y=it.second;

        int x = i+ mov_x ;
        int y = j+ mov_y ;

       

        if(is_possible(mat,x,y)){
            if(mat[x][y]== word[1]){
                int k=2;

                int x_ind= x+mov_x;
                int y_ind= y+mov_y;
                
                bool is_match=true;

                while(k<word.size()){

                    if(!is_possible(mat,x_ind,y_ind)) break;

                    if(mat[x_ind][y_ind]!= word[k]) {is_match=false;
                    break;
                }
                k++;

                x_ind+= mov_x;
                y_ind+= mov_y;

                
                }
                if(is_match && k==word.size()){
                   ans.push_back({i,j});
                    break;
                }


            }
        }
    
        
    }
}
}


 vector<vector<int>> searchWord(vector<vector<char>> &mat, string &word) {

    int n=mat.size();

    int m=mat[0].size();


    vector<pair<int,int>> movements={{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(mat[i][j]==word[0]){
            dfs(mat,word,i,j,ans,movements);
        }
        }
    }
    vector <vector<int>> res(n);

   return ans;
    }

int main(){
    
}    