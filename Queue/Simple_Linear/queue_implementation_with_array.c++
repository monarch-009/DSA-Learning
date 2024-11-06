#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;  // Array to store queue elements
    int size;  // Maximum size of the queue
    int front; // Index of the front element in the queue
    int rear;  // Index where the next element will be added

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        this->front = 0;
        this->rear = 0;
    }

    // Function to add an element to the queue
    void push(int data)
    {
        if (rear == size) // Check if the queue is full
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            arr[rear] = data; // Add the data to the rear of the queue
            rear++;           // Move the rear index forward
        }
    }

    // Function to remove an element from the front of the queue
    void pop()
    {
        if (front == rear) // Check if the queue is empty
        {
            cout << "Queue is empty. Cannot remove an element." << endl;
        }
        else
        {
            front++;         // Move the front index forward

            // Reset the front and rear indexes if the queue is now empty
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    // Get the element at the front of the queue
    int getFront()
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty." << endl;
            return -1; // Return -1 to indicate that the queue is empty
        }
        return arr[front]; // Return the front element
    }

    // Get the element at the rear of the queue 
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
        }
        return arr[rear - 1]; 
    }

    // Get the current number of elements in the queue
    int getSize()
    {
        return rear - front; 
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return (front == rear); 
    }
};

int main()
{
    Queue q(5);

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the current size of the queue
    cout << "Current queue size: " << q.getSize() << endl;

    // Get and display the front and rear elements
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    // Remove an element from the queue
    q.pop();

    // Display the front and rear elements after removing one element
    cout << "After popping one element:" << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    // Check if the queue is empty
    cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // Add more elements to fill the queue
    q.push(40);
    q.push(50);
    q.push(60); // This should show that the queue is full

    // Display the final size and elements of the queue
    cout << "Final queue size: " << q.getSize() << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    return 0;
}
