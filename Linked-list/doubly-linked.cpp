// doubly linked list
#include <iostream>
using namespace std;
struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};
struct Node *head= NULL, *temp=NULL;
void insertElem(int value){
    struct Node * newnode = new Node();
    newnode->data=value;
    if(head==NULL){
        head = newnode;
        newnode->prev = NULL;
        temp = head;
    }else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}
// element insert at any position of the linked list
void insertAtPosition(int data, int pos){
    struct Node * newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if(pos == 1){
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = head;
        head = newnode;
        return;
    }
    temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}
void deletion(int pos){
    if(pos == 1){
        head = temp->next->next;
        return;
    }
    temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
}
int main(){
    int n;
    cout<<"Enter the number of elements that you want to enter in the linked list: ";
    cin>>n;
    int value;
    for(int i=1; i<=n; i++){
        cin>>value;
        insertElem(value);
    }
    // display linked list
    cout<<"\nDoubly Linked List is: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // insert element at the beginning
    struct Node * newnode = new Node();
    temp = head;
    int num;
    cout<<"\nEnter number that you want to enter at the beginning: ";
    cin>>num;
    newnode->next = temp;
    newnode->data = num;
    newnode->prev = NULL;
    head = newnode;

    // display final linked list
    temp = head;
    cout<<"\nFinal Linked list after insertion at the beginning: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    int position;
    cout<<"\nEnter the number of position that you want to enter the data: ";
    cin>>position;
    int val;
    cout<<"\nEnter value that you want to enter: ";
    cin>>val;
    insertAtPosition(val,position);
    temp = head;
    cout<<"\nFinal Linked list after insertion at the any position: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    // deletion of element at specific position
    cout<<"\nEnter position of which you want to delete the element: ";
    int positionn;
    cin>>positionn;
    deletion(positionn);
    cout<<"\nFinal linked list after deletion: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}
