// program to insert node at the beginning (circular double linked list)
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
    cout << "Print data and link : " << endl;
    if(start != NULL){
        ptr = start;
        do{
            cout << "Data : " << ptr -> data;
            cout << " |Next : " << ptr -> next;
            cout << " |Prev : " << ptr -> prev << endl; 
            ptr = ptr -> next; 
        }while(ptr != start);
    }
    return 0;
}
// 
