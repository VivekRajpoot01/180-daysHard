#include <iostream>
using namespace std;
struct Node{
    struct Node *prev;
    int data;
    struct Node * next;
};
struct Node *head=NULL, *temp=NULL;