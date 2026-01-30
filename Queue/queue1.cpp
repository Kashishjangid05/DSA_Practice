//Program to insert an element in queue
#include<iostream>
using namespace std;
// 
int main(){
   int F =-1 , R = -1, max , arr[5];
   max == 4;
   if( R == max){
    cout << " queue is full ";
   }else{
    if(R == -1){
        R = F = 0;
        cout << "enter";
        cin >> arr[R];
    }else{
        R = R + 1;
        cout << "enter value";
        cin >> arr[R];
    }
   }

   cout << "print array " << arr[R];
   
return 0;
}
