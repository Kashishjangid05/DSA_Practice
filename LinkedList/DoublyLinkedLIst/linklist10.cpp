// program to insert node at given position
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
    int n, pos, val;
    struct node *start = NULL;
    struct node *ptr = NULL;
    struct node *newnode = NULL;

    cout << "enter how many nodes you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter data value: ";
        cin >> newnode->data;
        newnode->next = NULL;
        newnode->prev = NULL;

        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
        }
    }
    // before insertion of new node at any position
    cout << "doubly linked list before insertion\n";
    ptr = start;
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data;
        if (ptr->next != NULL)
        {
            cout << " |Next: " << ptr->next;
        }
        else
        {
            cout << " |Next:NULL ";
        }

        if (ptr->prev != NULL)
        {
            cout << " |Prev: " << ptr->prev << endl;
        }
        else
        {
            cout << " |Prev:NULL " << endl;
        }
        ptr = ptr-> next;
    }
    
    // program where new node to be inserted
    cout << "enter position where node is to be inserted: ";
    cin >> pos;
    cout << "enter data that to be inserted: ";
    cin >> val;

    newnode = new node;
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (pos == 1)
    {
        newnode->next = start;
        if (start != NULL)
        {
            start->prev = newnode;
        }
        start = newnode;
    }
    else
    {
        ptr = start;
        for (int i = 0; i < pos - 2; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                cout << "invalid positio";
            }
            newnode->next = ptr->next;
            if (ptr->next != NULL)
            {
                ptr->next->prev = newnode;
            }
            newnode->prev = ptr;
            ptr->next = newnode;
        }
    }

    // display
    cout << "doubly linked list after insertion\n";
    ptr = start;
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data;
        if (ptr->next != NULL)
        {
            cout << " |Next: " << ptr->next;
        }
        else
        {
            cout << " |Next:NULL ";
        }

        if (ptr->prev != NULL)
        {
            cout << " |Prev: " << ptr->prev << endl;
        }
        else
        {
            cout << " |Prev:NULL " << endl;
        }
        ptr = ptr-> next;
    }
    return 0;
}