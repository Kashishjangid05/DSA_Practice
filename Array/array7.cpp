//WAP to perform sum and product of all elements of 2D array
#include<iostream>
using namespace std;

int main(){
    int i, j, arr[10][10] , n, sum=0 , product =1;
    cout<< "enter value of n \n";
    cin>> n;
    cout<< "enter array values \n";
    for(i=0; i<n; i++){
        for(j=0; j<n ; j++){
            cin>> arr[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n ; j++){
            sum = sum + arr[i][j];
            product = product * arr[i][j];
        }
    }
    cout<< "sum of all elements is "<< sum << endl;
    cout<< "product of all elements is "<< product << endl;

return 0;
}

