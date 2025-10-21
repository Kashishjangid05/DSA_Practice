//Program to insert node at end and delete node at end
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;
    struct node *del = NULL;

    int n, i, value;
    cout << "enter how many node you want to insert\n";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter value of node " << i + 1 << ":";
        cin >> newnode->data;
        newnode->link = NULL;
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = newnode;
        }
    }
    cout << "\n Linked list" << endl;
    
        ptr = start;
        while (ptr != NULL)
        {
            cout << "Data:" << ptr ->data <<"|link:" << ptr ->link << endl ;
            ptr = ptr->link;
        }
    
    cout << "NULL\n";

    // deletion
    if(start == NULL){
        cout << "empty list";
    }
    if(start -> link == NULL){
        delete start;
        start = NULL;
    }
    ptr = start;
    while (ptr -> link -> link != NULL){
        ptr = ptr -> link;
    }
    del = ptr -> link;
    ptr -> link = NULL;
    cout << "deleted node : " << del -> data << endl;
    delete del;

    // display after deletion
    cout << "linked list after deletion:" << endl;
    ptr = start;
    while(ptr!=NULL){
        cout << ptr->data <<"->";
        ptr = ptr ->link;
    }
    cout << "NULL";
    return 0;
}