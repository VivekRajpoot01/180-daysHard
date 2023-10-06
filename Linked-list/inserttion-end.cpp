#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;

};


void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    Node* last = *head_ref;
    while (last->next!= NULL) {
        last = last->next;
    }

    last->next = new_node;
    return;

}


void printList(Node* node) {
    while (node!= NULL) {
        cout << node->data << " ";
        node = node->next;
    }

}


int main() {
    Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    cout << "Linked List: ";
    printList(head);

    return 0;

}