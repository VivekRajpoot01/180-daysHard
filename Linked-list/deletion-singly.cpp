#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; 

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

void deleteNode(int value) {
    
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    // Check if the node to be deleted is the head node
    if (head->data == value) {
        head = head->next;
        return;
    }

    // Find the node to be deleted
    Node *current = head;
    Node *prev = NULL;
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // Check if the node to be deleted was found
    if (current == NULL) {
        cout << "The node to be deleted was not found." << endl;
        return;
    }

    // Delete the node
    prev->next = current->next;
    delete current;
}

int main() {
    int choice;
    cout << "Enter your choice (0 to exit, 1 to insert a node, 2 to delete a node): ";
    cin >> choice;

    while (choice != 0) {
        if (choice == 1) {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertNode(data);
            displayList();
        } else if (choice == 2) {
            int value;
            cout << "Enter the value of the node to be deleted: ";
            cin >> value;
            deleteNode(value);
            displayList();
            } else {
            cout << "Invalid choice. Please enter a valid choice." << endl;
            }
            cout << "Enter your choice (0 to exit, 1 to insert a node, 2 to delete a node): ";
            cin >> choice;
        }
return 0;
}