// Formation of tree with 3 node
//  this will print root node data and link and newnde daata and link
#include <iostream>
using namespace std;

struct Tree
{
    int data;
    struct Tree *left = NULL;
    struct Tree *right = NULL;
};

int main()
{
    int i, n, value;
    struct Tree *root = NULL;
    struct Tree *newnode = NULL;
    struct Tree *ptr = NULL;

    cout << "enter how many nodes you want to insert";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (root == NULL)
        {
            newnode = new Tree;
            root = ptr = newnode;
            cout << "enter value of data";
            cin >> newnode->data;
            newnode->data = value;
            newnode->left = NULL;
            newnode->right = NULL;
        }
        else
        {
            if (value < root->data)
            {
                if (ptr->left == NULL)
                {
                    newnode = new Tree;
                    cout << "enter";
                    cin >> newnode->data;
                    ptr->left = newnode;
                    newnode->left = NULL;
                    newnode->right = NULL;
                }
                else
                {
                    ptr = root;
                    ptr = ptr->left;
                    newnode = new Tree;
                    cout << "enter";
                    cin >> newnode->data;
                    ptr->left = newnode;
                    newnode->left = NULL;
                    newnode->right = NULL;
                }
            }
            else
            {
            }
        }
    }

    ptr = root;
    cout << "print data and link";
    cout << root->data << endl;
    cout << root->left << endl;
    cout << root->right << endl;
    cout << newnode->data << endl;
    cout << newnode->left << endl;
    cout << newnode->right << endl;
    return 0;
}

// tree code