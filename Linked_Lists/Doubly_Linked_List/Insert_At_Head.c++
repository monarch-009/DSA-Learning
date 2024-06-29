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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head,9);
    printlist(head);

    insertAtHead(head,8);
    printlist(head); 

    insertAtHead(head,7);
    printlist(head);

    insertAtHead(head,6);
    printlist(head);





    return 0;
}