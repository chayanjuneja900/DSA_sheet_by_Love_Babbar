#include<bits/stdc++.h>
using namespace std;

int *arr;

int ct;

int top;

 myStack(int n) {

    arr = new int[n];
    ct =n;
    top =-1;
    }

    bool isEmpty() {
         return top ==-1;
    }

    bool isFull() {
        return top == ct-1;

    }

    void push(int x) {
        if(!isFull()){
            arr[++top] =x;
        }
    }

    void pop() {
        if(!isEmpty()){
            top--;
        }
    }

    int peek() {
        if(isEmpty()) return -1;
         return arr[top];
       
    }

int main(){

}