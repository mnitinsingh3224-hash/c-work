#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtMiddle(Node* &head, int data, int pos) {
    Node* newNode = new Node();
    newNode->data = data;

    // If inserting at first position
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    // Creating list: 10 -> 20 -> 40
    insertAtMiddle(head, 40, 1);
    insertAtMiddle(head, 20, 1);
    insertAtMiddle(head, 10, 1);

    // Insert 30 at position 3
    insertAtMiddle(head, 30, 3);

    display(head);
    return 0;
}
