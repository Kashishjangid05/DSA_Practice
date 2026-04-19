//WAP to insert an element at beginning of an array
#include<iostream>
using namespace std;

int main(){
   int i, arr[100], n , newElement;
   cout<< "enter value of n\n";
   cin>> n;

   cout<< "enter array values \n";
   for(i=0;i<n;i++){
    cin>> arr[i];
   }

   cout<<"enter new element to insert";
   cin>> newElement;

   for(i=n;i>=0;i--){
    arr[i] = arr[i - 1];
   }

   arr[0]= newElement;
   n++;

   cout<<"print array values after inserting new element \n";
   for(i=0;i<n;i++){
     cout<< arr[i]<<endl;
   }
return 0;
}

// 
