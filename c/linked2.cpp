#include <iostream>
using namespace std;

// Node class (struct-like)
class Node {
public:
    int data;
    Node* next;
};

// Insert at end function
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // Case 1: list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Case 2: list is not empty
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;   // link last node to new node
}

// Display function
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

// Main
int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    display(head);
    return 0;
}
