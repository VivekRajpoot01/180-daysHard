#include <iostream>
using namespace std;
struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};
struct Node *head=NULL, *temp=NULL;
void insertAtEnd(int data){
    struct Node * newnode = new Node();
    newnode->data  = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        temp = head;
    }else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = temp->next;
    }
}
void display(){
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtPosition(int data, int pos){
    struct Node * newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(pos==1){
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
    temp->next = newnode;
    temp->next->prev = newnode;
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
    cout<<"How many node you want to create in the doubly linked list: ";
    int n;
    cin>>n;
    int data;
    cout<<"\nEnter the value for each node: ";
    for(int i=0; i<n; i++){
        cin>>data;
        insertAtEnd(data);
    }

    // display the linked list
    cout<<"\nDoubly linked list is: ";
    display();
    // // insert the element at the beginning of the linked list
    // temp = head;
    // struct Node * newnode = new Node();
    // cout<<"\nEnter the data that you want to insert at the beginning of linked list: ";
    // int val;
    // cin>>val;
    // newnode->data = val;
    // newnode->prev = NULL;
    // newnode->next = temp;
    // head = newnode;

    // inseert element at any point
    cout<<"\nEnter the value that you want to enter in the node: ";
    int val;
    cin>>val;
    cout<<"\nEnter at which position that you want to insert the data: ";
    int pos;
    cin>>pos;
    insertAtPosition(val, pos);

    // display linked list after insertion at the beginning of the linked list
    cout << "\nLinked List After Inserting the element at position "<<pos<<" is: ";
    display();

    // deletion of the element
    cout<<"\nEnter the position of the element that you want to delete: ";
    int pos1;
    cin>>pos1;
    deletion(pos1);

    // display linked list after deletion
    cout<<"\nLinked list after deleting the element at position "<<pos1<<" is: ";
    display();

    // searching the element in the doubly linked list
    int num2, count=0;
    cout<<"\nEnter the element that you want to search in the linked list: ";
    cin>>num2;
    temp = head;
    while(temp!=NULL){
        if(num2==temp->data){
            cout<<"\nElement present in the linked list";
            break;
        }
        temp = temp->next;
        if(temp==NULL){
            cout<<"\nElement not present in the linked list";
        }
    }
    cout<<"\nYeah! You complete this program without any error!!";
    return 0;
}

/*
reverse 
Node * curr = head;
node * temp = NULL;
while (curr != null){
    temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
    curr = curr->prev;
}
if(curr!=NULL){
    head = curr->prev;
}

*/