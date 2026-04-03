// Program to insert 5 node in the begin and pritn all of them with link
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int i,n;
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;

    cout << "enter how many nodes you want to insert";
    cin >> n;
    for (int i = 1; i <= n; i++)
        {
            if(start == NULL){
                newnode = new node;
                cout << "enter data ";
                cin >> newnode->data;
                newnode ->link = NULL;
                start = newnode;
            }else{
                ptr = start;
                newnode = new node;
                cout << "enter data ";
                cin >> newnode -> data;
                newnode ->link = ptr;
                start = newnode;
            }
        }
    ptr = start;
    cout << "print data and link" << endl;
    for ( i=1; i<=n; i++){
        cout << "Data:" << ptr ->data <<"|link:" << ptr ->link << endl ;
        ptr = ptr->link;
    }    
    return 0;
}
// 
