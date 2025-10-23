#include <iostream>
using namespace std;

class Queue {
private:
    int arr[10];    // fixed size array
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert (Enqueue)
    void enqueue(int value) {
        if (rear == 9) {  // queue is full
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        if (front == -1) front = 0; // first element

        rear++;
        arr[rear] = value;
        cout << "Inserted: " << value << endl;
    }

    // Delete (Dequeue)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Nothing to delete." << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;
        front++;
    }

    // Display all elements
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(50);
    q.display();

    return 0;
}