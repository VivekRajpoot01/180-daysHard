#include <iostream>
using namespace std;
struct Node{
    string data;
    struct Node * next;
};
struct Node *head=NULL, *temp = NULL;
void insertAtEnd(string str){
    struct Node * newnode = new Node();
    newnode->data = str;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        temp = head;
    }else{
        temp->next = newnode;
        temp = newnode;
    }
}
void insertAtPosition(string str, int pos, int n){
    struct Node * insertNode = new Node();
    insertNode->data = str;
    insertNode->next = NULL;
    if(pos==1){
        insertNode->next = head;
        head = insertNode;
    }else{
        temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->next;
        }
        insertNode->next = temp->next;
        temp->next = insertNode;
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=1; i<=n; i++){
        cin>>str;
        insertAtEnd(str);
    }
    string st;
    cin>>st;
    int pos;
    cin>>pos;
    // display linked-list before insertion string any specific position
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
    insertAtPosition(st,pos,n);
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}