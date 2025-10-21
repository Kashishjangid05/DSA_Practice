//Program to insert a node in the begin
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
   struct node *start = NULL;
   struct node *ptr = NULL;
   struct node *newnode = NULL;

   newnode = (struct node *)malloc(sizeof(struct node));
   cout << "enter a value to insert ";
   cin >> (newnode -> data);
   ptr = start;
   newnode -> link=ptr;
   start = newnode;

   cout << "show newnode " << newnode -> data << endl;;
   cout << "show newnode link " << newnode -> link;
  
return 0;
}