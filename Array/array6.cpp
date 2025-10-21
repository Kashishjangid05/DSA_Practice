//WAP to find max and min element in an array
#include<iostream>
using namespace std;

int main(){
    int i , arr[10], max , min;
    cout<< "enter array values \n";
    for(i=0; i<5; i++){
        cin>> arr[i];
    }
    max = arr[0];
    min = arr[0];

    for(i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<< "maximum value of array = "<< max << endl;
    cout<< "minimum value of array = "<< min << endl;
return 0;
}