// #include <iostream>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// struct Node* head = NULL, *temp = NULL;
// void insertNode(int value){
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->next = head;
//     head = newnode;
// }
// int main(){
//     int choice;
//     cout<<"Enter choice(0 to exit and 1 to insert a node): ";
// }

#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *head, *temp;
int main() {
    int choice;
    int count = 0;
    cout << "Enter your choice(0,1): ";
    cin >> choice;
    while (choice) {
        struct Node *newnode = new Node();
        cout << "Enter value: ";
        int value;
        cin >> value;
        newnode->data = value;
        newnode->next = NULL;
        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        count++;
        cout << "Enter your choice(0,1): ";
        cin >> choice;
    }
    temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    cout<<count;
    struct Node *headernode = new Node();
    headernode->data = count;
    headernode->next = head;
    head = headernode;

    temp = headernode->next;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}