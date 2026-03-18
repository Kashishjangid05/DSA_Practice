//WAP to print reverse array elements
#include<iostream>
using namespace std;

int main(){
   int i, arr[5];
   cout<< "enter array values\n";
   for(i=0;i<5;i++){
    cin>>arr[i];
   }
   cout<<"print array values\n";
   for(i=4;i>=0;i--){
    cout<<arr[i]<<endl;
   }
return 0;
}

