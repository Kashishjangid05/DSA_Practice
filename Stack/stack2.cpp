//implementaion of multiple stack using single array
#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size;
    int top1, top2;
    int n,k;
    public:
    int twoStacks(int n){
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }
    void push1(int x){
        if(top1<top2-1){
            arr[++top1] = x;
        }else{
            cout << "stack overflow\n";
        }
    }
    void push2(int x){
        if (top1 < top2-1){
            arr[--top2] = x;
        }else{
            cout << "stack overflow\n";
        }
    }
    int pop1(){
        if(top1 >=0){
            return arr[top1--];
        }else{
            cout << "stack underflow\n";
            return -1;
        }
    }
    int pop2(){
        if(top2 <size){
            return arr[top2++];
        }else{
            cout << "stack underflow\n";
            return -1;
        }
    }
};

int main(){
   int twoStacks ts;
   ts.push1(5);
   ts.push1(10);
   ts.push2(20);
   ts.push2(30);
   cout << "poped from stack 1:" << ts.pop1() << endl;
   cout << "poped from stack 2:" << ts.pop2()<< endl;
return 0;
}