#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);  // Changed from Node *newNode = new Node(data); to Node *newNode = new Node(data);
    tail->next = newNode;  // Changed from tail->next = newNode; to tail->next = newNode;
    tail = newNode; // Changed from tail = newNode; to tail = newNode;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);

    printList(head); 

    return 0;
}
