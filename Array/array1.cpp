//WAP to print array elements
#include<iostream>
using namespace std;

int main(){
   int arr[5],i;
   cout<<"enter array values\n";
   for(i=0;i<5;i++){
      cin>>arr[i];
   }
   cout<<"print array values\n";
   for(i=0;i<5;i++){
     cout<<arr[i]<<endl;
   }
return 0;
}