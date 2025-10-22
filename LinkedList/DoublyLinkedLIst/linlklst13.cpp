// program to delete node at the given position
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev = NULL;
    struct node *next = NULL;
};

int main()
{
    int n;
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *ptr = NULL;
    struct node *del = NULL;

    cout << "how many nodes you want to insert";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (start == NULL)
        {
            newnode = new node;
            cout << "enter the data";
            cin >> newnode->data;
            newnode->next = NULL;
            newnode->prev = NULL;
            start = newnode;
        }
        else
        {
            newnode = new node;
            cout << "enter value";
            cin >> newnode->data;
            newnode->next = start;
            start->prev = newnode;
            start = newnode;
        }
    }
    // display
    cout << "Doubly Linked List\n";
    ptr = start;
    while (ptr != NULL)
    {
        cout << "Data:" << ptr->data;
        if (ptr->next != NULL)
        {
            cout << "|Next:" << ptr->next;
        }
        else
        {
            cout << "|Next: NULL";
        }

        if (ptr->prev != NULL)
        {
            cout << "|Prev:" << ptr->prev << endl;
        }
        else
        {
            cout << "|Prev: NULL" << endl;
        }

        ptr = ptr->next;
    }

    // -------------deletion------------------
    int pos;
    cout << "enter the position yu want to delete";
    cin >> pos;
    if (start == NULL)
    {
        cout << "empty list";
    }
    if (pos == 1)
    {
        del = start;
        start = start->next;
        if (start != NULL)
        {
            start->prev = NULL;
        }
        cout << "Deleted node: " << del->data << endl;
        delete del;
    }
    else
    {
        ptr = start;
        for (int i = 1; i < pos && ptr != NULL; i++)
        {
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            cout << "invalid position";
        }
        if (ptr->next != NULL)
        {
            ptr->next->prev = ptr->prev;
        }
        if (ptr->prev != NULL)
        {
            ptr->prev->next = ptr->next;
        }
        delete ptr;
    }

    // ----------------display------------------
    cout << "linked list after deletion" << endl;
    ptr = start;
    while (ptr != NULL)
    {
        cout << "Data:" << ptr->data;
        if (ptr->next != NULL)
        {
            cout << "| Next : " << ptr->next;
        }
        else
        {
            cout << "| Next : NULL";
        }
        if (ptr->prev != NULL)
        {
            cout << " | Prev " << ptr->prev << endl;
        }
        else
        {
            cout << " | Prev : NULL" << endl;
        }
        ptr = ptr->next;
    }
    return 0;
}