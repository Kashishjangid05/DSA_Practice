// Program to insert node in the begin and pritn all of them with link and then delete
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
    int i;
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;

    int n;
    cout << "enter how many node you want to insert:";
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

    // display nodes
    ptr = start;
    cout << "print data and link" << endl;
    while(ptr != NULL){
        cout << "Data:" << ptr ->data <<"|link:" << ptr ->link << endl ;
        ptr = ptr->link;
    }    

    // deletion
    if (start == NULL){
        cout << "empty list" << endl;
    }else{
        ptr = start;
        start = start->link;
        cout << "deleted node:" << ptr ->data << endl ;
        delete ptr;
    }
    // display after deletion
    cout << "linked list after deletion:" << endl;
    ptr = start;
    while(ptr != NULL){
        cout<<ptr->data << "->";
        ptr = ptr -> link;
    }
    cout << "NULL";

    return 0;
}