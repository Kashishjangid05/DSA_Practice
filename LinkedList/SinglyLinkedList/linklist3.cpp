//Program to insert node at end
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
    cout << "\n Linked list";
    
        ptr = start;
        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            cout << ptr->link << endl;
            ptr= ptr->link;
        }
    
    cout << "NULL\n";

    return 0;
}
// 
