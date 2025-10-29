// Program to insert node at given position(circular single linked list)
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int n, pos;
    struct node *start = NULL;
    struct node *ptr = NULL;
    struct node *newnode = NULL;

    cout << "enter how many nodes you want to insert : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter data: ";
        cin >> newnode->data;

        if (start == NULL)
        {
            newnode->link = newnode;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->link != start)
            {
                ptr = ptr->link;
            }
            newnode->link = start;
            ptr->link = newnode;
            start = newnode;
        }
    }
    // ---------------------display-------------
    cout << "Linked list : " << endl;
    ptr = start;
    if(start != NULL){
        do{
            cout << "Data: " << ptr -> data << " |Link: " << ptr->link <<endl ;
            ptr = ptr ->link; 
        }while(ptr != start);
    }
    
    cout << "enter position where you want to insert the node : ";
    cin >> pos;
    cout << "enter value : ";
    cin >> newnode->data;

    if (start == NULL && pos == 1)
    {
        cout << "invalid position or empty list";
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            newnode = new node;
            cout << "enter data ";
            cin >> newnode->data;
            newnode->link = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            newnode = new node;
            cout << "enter data ";
            cin >> newnode->data;
            newnode->link = ptr;
            start = newnode;
        }
    }
    ptr = start;
    int i = 1;
    while (i < pos - 1 && ptr->link != start)
    {
        ptr = ptr->link;
        i = i + 1;
    }
    if (i != pos - 1){
        cout << "invalid position";
    }
    else{
        newnode->link = ptr->link;
        ptr->link = newnode;
    }

    // ---------------------display------------------
    cout << "Linked list : " << endl;
    ptr = start;
    if(start != NULL){
        do{
            cout << "Data: " << ptr -> data << " |Link: " << ptr->link <<endl ;
            ptr = ptr ->link; 
        }while(ptr != start);
    }
        return 0;
}