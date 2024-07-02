#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for the node with data " << value << endl;
    }
};

// Traversal in Doubly Linked List
void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }

    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

// Insert at any Position
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at head
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Insert at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

// Deleting node from doubly linked list
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position - 1)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtPosition(head, tail, 1, 8);
    printlist(head);
    insertAtPosition(head, tail, 3, 11);
    printlist(head);
    insertAtPosition(head, tail, 2, 9);
    printlist(head);
    insertAtPosition(head, tail, 2, 7);
    printlist(head);

    deleteNode(1, head);
    printlist(head);

    deleteNode(5, head);
    printlist(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}