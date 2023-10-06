#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
struct Node *head=NULL, *temp=NULL;
void insertAtBig(int n){
    struct Node * newnode = new Node();
    newnode->data = n;
    newnode ->next  = head;
    head = newnode;
    temp = head;
}
void insertAtEnd(int n){
    struct Node * newnode = new Node();
    newnode->data = n;
    newnode->next  = NULL;
    if(head==NULL){
        head = newnode;
        temp = head;
    }else{
        while (temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        temp = newnode;
    }
}
void display(){
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int choice,n;
    cin>>choice;
    while(choice<4){
        if(choice==1){
            cin>>n;
            // insert element at the beginning
            insertAtBig(n);
        }
        if(choice==2){
            // insert element at the end
            cin>>n;
            insertAtEnd(n);
        }
        if(choice==3){
            // display the element
            display();
        }
        cin>>choice;
    }
    return 0;
}