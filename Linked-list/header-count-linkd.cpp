#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL, *temp=NULL;

void insertAtEnd(int value){
    struct Node * newnode = new Node();
    newnode->data =value;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        temp=head;
    }else{
        temp->next = newnode;
        temp = newnode;
    }
}
int main(){
    cout<<"Enter how many values that you want to enter in the linked list: ";
    int n;
    cin>>n;
    int value;
    for(int i=1; i<=n; i++){
        cin>>value;
        insertAtEnd(value);
    }
    // adding count node at the starting of linked list
    temp =head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    cout<<"The value of count is : "<<count;
    struct Node * headernode = new Node();
    headernode->data = count;
    headernode -> next = head;
    head = headernode;
    // logic for circular
    temp =  head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    // display linked list
    temp = head;
    cout<<"\nElement presen in the linked list: ";
    while(temp!=headernode){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}