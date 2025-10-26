// program to delete node at the end (circular single linked list)
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int n;
    struct node *start = NULL;
    struct node *ptr = NULL;
    struct node *newnode = NULL;
    struct node *del = NULL;

    // ---------------insertion---------------------
    cout << "enter how many nodes you want to insert : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter data : ";
        cin >> newnode->data;

        if (start == NULL)
        {
            newnode->link = newnode;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr -> link != start)
            {
                ptr = ptr->link;
            }
            ptr->link = newnode;
            newnode->link = start;
        }
    }

    // ------------------display-------------------
    cout << "Linked list : " << endl;
    ptr = start;
    if (start != NULL)
    {
        do
        {
            cout << "Data : " << ptr->data << " |Link : " << ptr->link << endl;
            ptr = ptr->link;
        } while (ptr != start);
    }

    // ------------------deletion------------------
    if(start == NULL){
        cout << "empty list";
    }
    else if(start -> link == start){
        cout << "Deleted node : " << start -> data << endl;
        delete start;
        start = NULL;
    }else{
        ptr = start;
        while (ptr ->link->link!= start){
            ptr = ptr -> link;
        }
        del = ptr -> link;
        ptr ->link= start;
        cout << " Deleted node : " << del -> data << endl;
        delete del;
    }

    // ---------------display-------------------
    ptr = start;
    cout << "Linked list after deletion : " << endl;
    if(start != NULL) {
        do{
            cout << "Data : " << ptr->data << " |Link : " << ptr->link << endl;
            ptr = ptr -> link;
        }while (ptr != start);
    }
    return 0;
}