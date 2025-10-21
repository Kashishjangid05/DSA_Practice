// program to insert node at end
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next = NULL;
    struct node *prev = NULL;
};

int main()
{
    int n;
    struct node *start = NULL;
    struct node *ptr = NULL;
    struct node *newnode = NULL;
    
    cout << "enter how many nodes you want to insert";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (start == NULL)
        {
            newnode = new node;
            start = newnode;
            cout << "enter node";
            cin >> newnode->data;
            newnode->next = NULL;
            newnode->prev = NULL;
        }
        else
        {
            newnode = new node;
            ptr = start;
            cout << "enter data";
            cin >> newnode->data;
            while(ptr->next!=NULL){
                ptr= ptr->next;
            }
            ptr -> next = newnode;
            newnode -> prev = ptr;
        }
    }

    // display
    cout << "print doubly linked list\n";
    ptr = start;
    while(ptr != NULL){
        cout << "Data:" << ptr->data ;

        if(ptr->next != NULL){
            cout << " |Next:" << ptr->next;
        }else{
            cout << " |Next:Null";
        }
        if(ptr->prev != NULL){
            cout << " |Prev:" << ptr->prev << endl;
        }else{
            cout << " |Prev:Null" << endl;
        }

        ptr = ptr -> next;
    }
    return 0;
}