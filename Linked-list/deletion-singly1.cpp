#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; // Initialize the head pointer

void insertNode(int value) {
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void displayList() {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    Node *current = head;
    cout << "Linked List: ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void deletion(){
    
}

int main() {
    int choice;
    cout << "Enter your choice (0 to exit, 1 to insert a node): ";
    cin >> choice;

    while (choice != 0) {
        if (choice == 1) {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertNode(data);
            displayList();
        } else {
            cout << "Invalid choice. Please enter 0 or 1." << endl;
        }

        cout << "Enter your choice (0 to exit, 1 to insert a node): ";
        cin >> choice;
    }

    return 0;
}
