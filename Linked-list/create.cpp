#include <iostream>
using namespace std;
struct Node{
    int data ;
    struct Node *next;
};
struct Node *head = NULL, *temp;

int main(){
    int choice;
    cout<<"Enter your choice(0,1): ";
    cin>>choice;
    while(choice){
        struct Node *newnode = new Node();;
        cout<<"Enter data: ";
        cin>>newnode->data;
        if(head==NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        cout<<"Enter choice(0,1) : ";
        cin>>choice;
    }
    //print the linked list
    struct Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}