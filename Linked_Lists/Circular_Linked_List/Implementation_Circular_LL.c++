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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for the node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    // Check weather the list is empty or not
    // Empty List
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        tail->next = tail; // newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element wala node
        // Create a new node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void printlist(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{

    Node *tail = NULL;
    // Empty list me insert krre hai;
    insertNode(tail, 5, 10);
    printlist(tail);

    insertNode(tail, 10, 20);
    printlist(tail);

    insertNode(tail, 20, 30);
    printlist(tail);

    insertNode(tail, 30, 40);
    printlist(tail);

    insertNode(tail, 40, 50);
    printlist(tail);

    insertNode(tail, 50, 60);
    printlist(tail);

    insertNode(tail, 30, 100);
    printlist(tail);

    return 0;
}