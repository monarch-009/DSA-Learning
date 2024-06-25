#include <iostream>
using namespace std;

class Node
{
public:
    int data;  // data of the node
    Node *next; // pointer to the next node

    Node(int data)
    {
        this->data = data; // this is a pointer to the current object
        this->next = NULL; // this is a pointer to the next object
    }
};

int main()
{
    Node* head = new Node(10); // head is a pointer to the first node
    Node* temp1 = new Node(20); // temp1 is a pointer to the second node
    Node* temp2 = new Node(30); // temp2 is a pointer to the third node

    head->next = temp1;   // head is pointing to the next node
    temp1->next = temp2;  // temp1 is pointing to the next node 

    cout << head->data << " " << temp1->data << " " << temp2->data << endl; // this will print the data of the node

    
    cout<<head->next << " " << temp1->next << " " << temp2->next << endl; // this will print the address of the next node


    return 0;
}