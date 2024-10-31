#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    // The data held by the node
    int data;
    // Pointer to the next node in the list
    Node* next;
};

// Define Queue class
class Queue {
    // Pointer to the front node of the queue
    Node* front;
    // Pointer to the rear node of the queue
    Node* rear;

public:
    // Constructor initializes an empty queue
    Queue()
        : front(nullptr)
        , rear(nullptr)
    {
    }

    // Enqueue adds an element at the end of the queue
    void enqueue(int x)
    {
        // Create a new node with given data
        Node* newNode = new Node{ x, nullptr };
        // If the queue is empty
        if (rear == nullptr) {
            // Both front and rear point to the new node
            front = rear = newNode;
        }
        else {
            // Link the new node at the end of the queue
            rear->next = newNode;
            // Update rear to the new node
            rear = newNode;
        }
    }

    // Dequeue removes the element at the front of the queue
    void dequeue()
    {
        // If the queue is empty, do nothing
        if (front == nullptr)
            return;
        // Temporary pointer to the front node
        Node* temp = front;
        // Move front to the next node
        front = front->next;
        // If the queue is now empty
        if (front == nullptr)
            // Set rear to nullptr
            rear = nullptr;
        // Delete the old front node
        delete temp;
    }

    // Peek returns the front element of the queue
    int peek()
    {
        if (!isEmpty())
            return front->data;
        else
            throw runtime_error("Queue is empty");
    }

    // isEmpty checks if the queue is empty
    bool isEmpty()
    {
        // Return true if front is nullptr
        return front == nullptr;
    }
};

// Main function
int main()
{
    // Create a queue
    Queue q;
    // Enqueue elements into the queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    // Output the front element
    cout << "Front element is: " << q.peek() << endl;
    // Dequeue the front element
    q.dequeue();
    // Output the new front element
    cout << "Front element is: " << q.peek() << endl;
    // Dequeue the remaining elements
    q.dequeue();
    q.dequeue();
    // Check if the queue is empty and output the result
    cout << "Queue is empty: " << q.isEmpty() << endl;
    return 0;
}
