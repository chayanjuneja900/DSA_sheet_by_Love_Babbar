#include<bits/stdc++.h>
using namespace std;
 class Solution {
  public:


  void insert_sorted(stack<int> &st, int x){
    if(st.empty() || st.top()<= x){
        st.push(x);
        return ;
    }

    
        int ele =st.top();
        st.pop();

        insert_sorted(st,x);

        st.push(ele);
    
  }

    void sortStack(stack<int> &st) {

        if(st.empty()){
            return;
        }

        int ele =st.top();
        st.pop();        

        sortStack(st);

        insert_sorted(st,ele);
        
    }
};

int main(){

}