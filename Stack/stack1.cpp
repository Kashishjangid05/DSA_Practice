//WAP for implementing stack using array (push, pop, peek, display)
#include<iostream>
using namespace std;
#define size 5
int stack [size],top= -1;
void push(int val){
    if (top >= size-1){
        cout<< "stack overflow";
    }else{
        stack[++top] = val;
    }
}
void pop(){
    if(top == -1){
        cout << "stack underflow";
    }else{
        top--;
    }
}
void peek(){
    if(top==-1){
        cout<<"stack is empty";
    }else{
        cout<<"top element:"<<stack[top]<<endl;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty";
    }else{
        cout<<"stack elements:";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
}
int main(){
   push(10);
   push(20);
   push(30);
   display();
   peek();
   pop();
   display();
return 0;
}