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
void searchElement(int elem){
    temp = head;
    while(temp!=NULL){
        if(temp->data == elem){
            cout<<"Element present in the linked list: ";
        }//else{
        //     cout<<"Element not present";
        //}
        temp = temp->next;
    }
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
    
    // Searching the element in the linked list

    int elem;
    cout<<"\nEnter the element that you want to search in the linked list: ";
    cin>>elem;
    searchElement(elem);
    // cout<<"\nDoubly Linked List after deletion at position "<<pos<<" is: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}