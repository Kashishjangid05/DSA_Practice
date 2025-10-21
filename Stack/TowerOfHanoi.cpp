//
#include<iostream>
using namespace std;

void hanoi(int n,char from, char to, char aux){
    if (n==1){
        cout << "move disk1 from " << from << "to" << to << endl;
        return;
    }
    hanoi(n-1 , from , aux , to);
    cout << "move disk " << n << "from " << from << "to" << to << endl;
}

int main(){
   int n;
   cout << "enter number of disk :";
   cin >> n;
   hanoi(n , 'A' , 'C', 'B');
return 0;
}