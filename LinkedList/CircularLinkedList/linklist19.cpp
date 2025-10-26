// Program to insert node at end (circular double linked list)
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

    // ------------------insertion--------------------
    cout << "enter how many nodes you want to insert : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter data : ";
        cin >> newnode -> data;

        if (start == NULL)
        {
            newnode->next = newnode;
            newnode->prev = newnode;
            start = newnode;
        }
        else{
            last = start -> prev;
            newnode -> next = start;
            newnode -> prev = last;
            start -> prev = newnode;
            last -> next = newnode;
            last = newnode;
        }
    }
    
    // -----------------display--------------------
    ptr = start;
    cout << "Linked list : " << endl;
    if(start != NULL){
        do{
            cout << "Data : " << ptr -> data << "|Next : " << ptr ->next << "|Prev : " << ptr ->prev << endl;
            ptr = ptr -> next;
        }while(ptr != start);
    }
    return 0;
}