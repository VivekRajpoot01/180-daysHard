#include <iostream>
using namespace std;
struct Node{
    string data;
    struct Node *next;
};
struct Node *head = NULL, *temp = NULL;
void insertAtBig(string str){
    struct Node * newnode = new Node();
    newnode->data=str;
    newnode->next = head;
    head = newnode;
}
void insertAtLast(string str){
    struct Node * newnode = new Node();
    //insertAtBig();
    newnode->data = str;
    newnode->next = NULL;
    temp = newnode;
}
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=1; i<=n; i++){
        cin>>str;
        insertAtBig(str);
    }
    string st;
    cin>>st;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // print the linked list
    insertAtLast(st);
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}