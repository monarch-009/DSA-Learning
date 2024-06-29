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
};

void printlist(Node *&head)
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
    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail,20);
    printlist(head);

    insertAtTail(tail,30);
    printlist(head);

    insertAtTail(tail,40);
    printlist(head);
    
    insertAtTail(tail,50);
    printlist(head);


    return 0;
}