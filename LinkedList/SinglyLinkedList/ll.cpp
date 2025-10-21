#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *start = NULL;  // Initially, list is empty

    for (int i = 0; i < 4; i++) {
        struct node *newnode = new node; // Create a new node
        cout << "Enter a value to insert: ";
        cin >> newnode->data;

        // Insert at beginning
        newnode->link = start;
        start = newnode;
    }

    // // Print all nodes
    // cout << "\nLinked list contents:\n";
    // struct node *temp = start;
    // while (temp != NULL) {
    //     cout << temp->data << endl;
    //     temp = temp->link;
    // }

    return 0;
}
