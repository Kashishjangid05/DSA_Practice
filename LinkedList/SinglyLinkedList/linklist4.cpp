//Program to insert node at given position
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

    int n, i, value , pos;
    cout << "enter how many node you want to insert\n";
    cin >> n;
// for initializing the node
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

// inserting node at given position
    cout << "enter value to insert";
    cin >> value;
    cout << "enter position where to insert the node";
    cin >> pos;

    newnode = new node;
    newnode->data= value;
    newnode->link =NULL;

    if(pos == 1){
        ptr = newnode->link;
        ptr = start;
    }else{
        ptr = start;
        for(int i=0; i<pos-1&& ptr->link!=NULL ;i++){
            ptr = ptr->link;
        }
        if(ptr == NULL){
            cout << "invalid position";
        }else{
            newnode->link = ptr->link;
            ptr ->link = newnode;
        }
    }


// display the nodes
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
