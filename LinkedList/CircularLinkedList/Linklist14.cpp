// program to insert node at the beginning (circular single linked list)
// 
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
    ptr = start;
    // ---------------------display---------------------
    cout << "Print data and link : " << endl;
    if (start != NULL)
    {
        do
        {
            {
                cout << "Data : " << ptr->data << "| Link : " << ptr->link << endl;
                ptr = ptr->link;
            }
        } while (ptr != start);
    }
    return 0;
}
