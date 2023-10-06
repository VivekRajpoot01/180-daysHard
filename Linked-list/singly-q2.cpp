#include <iostream>
using namespace std;
struct Node{
    string data;
    struct Node * next;
};
struct Node *head=NULL, *temp=NULL;
void insertAtTail(string str){
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
void insertAtPosition(string str, int pos){
    struct Node * newnode = new Node();
    newnode -> data  =str;
    struct Node * prev = head;
    int i=1;
    while(i<pos-1){
        prev = prev->next;
        i++;
    }
    newnode->next = prev->next;
    prev->next = newnode;
}
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=1; i<=n; i++){
        cin>>str;
        insertAtTail(str);
    }
    string st;
    cin>>st;
    int pos;
    cin >>pos;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    insertAtPosition(st,pos);
    temp = head;
    while(temp!=NULL){
        cout << temp->data <<" " ;
        temp = temp->next;
    }
    return 0;
}