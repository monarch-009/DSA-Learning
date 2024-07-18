#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        head->prev = head;
    } else {
        Node* tail = head->prev;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
}


void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        head->prev = head;
    } else {
        Node* tail = head->prev;
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
    }
}


void insertAfter(Node*& head, int val, int pos) {
    if (head == nullptr) return;
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos; i++) {
        temp = temp->next;
        if (temp == head) break;
    }
    Node* nextNode = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = nextNode;
    nextNode->prev = newNode;
}


void traverse(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}


void deleteNode(Node*& head, int val) {
    if (head == nullptr) return;
    Node* temp = head;
    do {
        if (temp->data == val) {
            Node* prevNode = temp->prev;
            Node* nextNode = temp->next;
            if (temp == head) {
                if (head->next == head) {
                    head = nullptr;
                } else {
                    head = nextNode;
                    prevNode->next = nextNode;
                    nextNode->prev = prevNode;
                }
            } else {
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    } while (temp != head);
}


int main() {
    Node* head = nullptr;

    // Insert at head
    insertAtHead(head, 10);
    insertAtHead(head, 20);

    // Traverse list
    cout << "List after insertions at head: ";
    traverse(head);

    // Insert at end
    insertAtEnd(head, 30);

    // Traverse list
    cout << "List after insertion at end: ";
    traverse(head);

    // Insert after specific position
    insertAfter(head, 25, 1);

    // Traverse list
    cout << "List after insertion in between: ";
    traverse(head);

    // Delete node
    deleteNode(head, 20);

    // Traverse list
    cout << "List after deletion of 20: ";
    traverse(head);

    // Delete node
    deleteNode(head, 30);

    // Traverse list
    cout << "List after deletion of 30: ";
    traverse(head);

    return 0;
}
