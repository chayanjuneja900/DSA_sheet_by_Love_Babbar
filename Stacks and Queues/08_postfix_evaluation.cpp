#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {

        int n =arr.size();

        stack<int> s;

        for(int i=0;i<n;i++){

            if(arr[i]== "+"){
                int b =s.top() ;
                s.pop();
                int a =s.top() ;
                s.pop();

                s.push(a+b);
                continue;
            }
            if(arr[i]== "-"){
                int b =s.top() ;
                s.pop();
                int a =s.top() ;
                s.pop();

                s.push(a-b);
                 continue;
                
            }
            if(arr[i]== "*"){
                int b =s.top() ;
                s.pop();
                int a =s.top() ;
                s.pop();

                s.push(a*b);
                 continue;
            }
            if(arr[i]== "/"){
                int b =s.top() ;
                s.pop();
                int a =s.top() ;
                s.pop();

                s.push(floor(a/(double)b));
                 continue;
            }
            if(arr[i]== "^"){
                int b =s.top() ;
                s.pop();
                int a =s.top() ;
                s.pop();

                s.push((int)pow(a,b));
                 continue;
            }


            s.push(stoi(arr[i]));



        }

        return s.top();
        
    }
};

int main(){

}