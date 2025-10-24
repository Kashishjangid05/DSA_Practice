// program to delete node at the beginning (circular double linked list)
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    int n;
    struct node *start = NULL;
    struct node *ptr = NULL;
    struct node *newnode = NULL;
    struct node *last = NULL;
    struct node *del = NULL;

    // -----------------insertion----------------------
    cout << "enter how many nodes you want to insert";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter data : ";
        cin >> newnode->data;

        if (start == NULL)
        {
            newnode->next = newnode;
            newnode -> prev = newnode;
            start = newnode;
            last = newnode;
        }
        else
        {
            last -> next = newnode;
            newnode -> next = start;
            newnode -> prev = last;
            start -> prev = newnode;
            start = newnode;
        }
    }
    // ---------------------display---------------------
    cout << "Linked list before deletion : " << endl;
    if(start != NULL){
        ptr = start;
        do{
            cout << "Data : " << ptr -> data;
            cout << " |Next : " << ptr -> next;
            cout << " |Prev : " << ptr -> prev << endl; 
            ptr = ptr -> next; 
        }while(ptr != start);
    }
    // ------------------deletion--------------------
    if (start == NULL){
        cout << "empty list" << endl;
    }
    else if(start -> next == start){
        cout << "deleted node: " << start -> data << endl;
        delete start;
        start = NULL;
    }
    else{
        last = start -> prev;
        del = start;
        start = start -> next;
        last -> next = start;
        start -> prev = last;
        cout << "deleted node : " << del -> data << endl;
        delete del;
    }
    // ----------------display--------------------
    cout << "Linked list after deletion : " << endl;
    if( start != NULL){
        ptr = start;
        do{
            cout << "Data : " << ptr -> data ;
            cout << " |Next : " << ptr -> next ;
            cout << " |Prev : " << ptr -> prev << endl;
            ptr = ptr -> next;
        }while ( ptr != start);
    }
    return 0;
}