#include <iostream>
using namespace std;

// Node class (acts like struct)
class Node {
public:
    int data;
    Node* next;
};

void insertAtBeginning(Node* &head, int value) {  // we use reference for not copy original value
    Node* newNode = new Node();   // create node
    newNode->data = value;
    newNode->next = head;         // link to old head
    head = newNode;               // update head
}

void display(Node* head) { // not take ref because we dont want to print original value of ref.
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    display(head);

    return 0;
}
