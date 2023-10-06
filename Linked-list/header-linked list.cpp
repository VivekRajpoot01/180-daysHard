// // create a header linked list in which the first node show the number of node present in the linked list
// #include <iostream>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// struct Node *head,*temp;
// int main(){
//     int choice;
//     int count = 0;
//     cout<<"Enter your choice(0,1): ";
//     cin>>choice;
//     while(choice){
//         struct Node *newnode = new Node();
//         cout<<"Enter value: ";
//         int value;
//         cin>>value;
//         newnode-> data = value;
//         newnode-> next = NULL;
//     }
//     temp = head;
//     while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     struct Node *headernode = new Node();
//     headernode->data = count;
//     headernode->next = head;
//     head = headernode;

//     return 0;
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
    struct Node *headernode = new Node();
    headernode->data = count;
    headernode->next = head;
    head = headernode;
    return 0;
}