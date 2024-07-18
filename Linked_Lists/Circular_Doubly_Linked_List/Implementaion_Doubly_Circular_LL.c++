#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Insert At Head
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *tail = head->prev;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
}

// Insert At End
void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *tail = head->prev;
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
    }
}

// Insert At Any Postion
void insertAfter(Node *&head, int val, int pos)
{
    if (head == nullptr)
        return;
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
        if (temp == head)
            break;
    }
    Node *nextNode = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = nextNode;
    nextNode->prev = newNode;
}

// Traverse of node
void printList(Node *head)
{
    if (head == nullptr)
        return;
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    // Insert at head
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    // Traverse list
    cout<< "List after insertions at head: ";
    printList(head);

    // Insert at end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    insertAtEnd(head, 60);

    // Traverse list
    cout << "List after insertion at end: ";
    printList(head);

    // Insert after specific position
    insertAfter(head, 40, 1);
    insertAfter(head, 5, 4);

    // Traverse list
    cout << "List after insertion in between: ";
    printList(head);

    return 0;
}
