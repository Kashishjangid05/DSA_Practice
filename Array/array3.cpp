//WAP to print sum of all elements of array
#include<iostream>
using namespace std;

int main(){
   int i, arr[5], sum=0;
   cout<<"enter array values \n";
   for(i=0 ; i<5 ; i++){
    cin>> arr[i];
   }
   for(i=0 ; i<5 ; i++){
    sum = sum + arr[i];
   }
   cout<<"Sum of all elements = "<< sum << endl;
return 0;
}
