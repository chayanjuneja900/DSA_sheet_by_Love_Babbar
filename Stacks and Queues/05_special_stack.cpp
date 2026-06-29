#include<bits/stdc++.h>
using namespace std;

int min_ele;


void push(stack<int>& s, int a) {
    if(s.empty()) {min_ele =a;
       s.push(a);
       return;
    }
    if(a<min_ele){

        s.push(2*a-min_ele);
        min_ele =a;
    }
    else{
        s.push(a);
    }

}
bool isFull(stack<int>& s, int n) {
    return  s.size()==n;
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int pop(stack<int>& s) {

    if(!isEmpty(s)){
    int ele =s.top();
    s.pop();
    
    if(ele<min_ele){
        int real_ele = min_ele;
        min_ele = 2*min_ele - ele;
        return real_ele;

    }
    else{
        return ele;
    }
}else return -1;
}

int getMin(stack<int>& s) {

    if(!isEmpty(s))  return min_ele;

    return -1;

}

int main(){

}