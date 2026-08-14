//WAP to insert an element at the end of an array
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

   arr[n]= newElement;
   n++;

   cout<<"print array values after inserting new element \n";
   for(i=0;i<n;i++){
     cout<< arr[i]<<endl;
   }
return 0;
}
// 
