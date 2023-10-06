#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL, *temp=NULL;
void insertAtEnd(int value){
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        temp = head;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
}
int main(){
    int n;
    cout<<"Enter how many values that you want to enter in the linked list: ";
    cin>>n;
    int value;
    // taking input for the linked list
    for(int i=1; i<=n; i++){
        cin>>value;
        insertAtEnd(value);
    }
    // logic for circular
    temp =  head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    //    display of the linkedlist
    temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
        } while (temp != head);
}