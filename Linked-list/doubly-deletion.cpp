#include <iostream>
using namespace std;
struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};
struct Node *temp = NULL, *head = NULL;
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
void deletionAtPos(int pos){
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
    // deletion at the beginning
    // temp = head;
    // head = head->next;
    // delete temp;
    // temp->prev = NULL;
    // display linked list after deletion at the beginning

    int pos;
    cout<<"\nEnter the position at which you want to delete the element: ";
    cin>>pos;
    // deletionAtPos(pos);

    cout<<"\nDoubly Linked List after deletion at position "<<pos<<" is: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}