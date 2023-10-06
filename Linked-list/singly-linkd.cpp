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
    
    // Create a header node with the count as data
    struct Node *headerNode = new Node();
    headerNode->data = count;
    headerNode->next = head;
    head = headerNode;
    
    // Print the nodes, including the header node
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}
