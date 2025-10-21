// Program to insert node and delete node at the given position
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
    int i,n,pos;
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;
    struct node *del = NULL;

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
    // deletion
    cout << "enter position of node to delete:";
    cin >> pos;
    if ( start == NULL){
        cout << "empty list";
    }
    if(pos == 1){
        ptr = start;
        start ->link = NULL;
        delete start;
    }
    ptr = start;
    for ( i=0;i<pos-1;i++){
        ptr = ptr->link;
    }
    del = ptr -> link;
    ptr->link = del->link;
    cout << "deleted node:" << del->data << endl;
    delete del;

    // display
    ptr= start;
    cout << "linked list after deletion " << endl;
    while(ptr!= NULL){
        cout << ptr->data <<"->";
        ptr = ptr->link;
    }
    cout << "NULL";
    return 0;
}