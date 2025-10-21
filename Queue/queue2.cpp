//Program to insert many elements in queue
#include<iostream>
using namespace std;

int main(){
   int F =-1 , R = -1, max , arr[5];
   max == 4;
   if( R == max){
    cout << " queue is full ";
   }else{
    if(R == -1){
        R = F = 0;
        cout << "enter \n";
        for(int i=0; i<5; i++){
            cin >> arr[i];
        }   
    }else{
        R = R + 1;
        cout << "enter value \n";
        for(int i=0; i<5; i++){
            cin >> arr[i];
        } 
    }
   }
   cout <<"print array \n";
   for(int i=0; i<5; i++){
    cout << arr[i]<< endl;
   }

return 0;
}