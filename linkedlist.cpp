#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
private:
    Node* head;  // first node pointer

public:
    LinkedList() {
        head = nullptr;  // initially the list is empty
    }

    // Function to insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node;     // 1️⃣ dynamically allocate memory for a new node
        newNode->data = value;        // 2️⃣ assign data
        newNode->next = nullptr;      // 3️⃣ set its next pointer to null (as it's last node)

        // 4️⃣ If the list is empty
        if (head == nullptr) {
            head = newNode;           // the new node becomes the first node
        } 
        else {
            // 5️⃣ Otherwise, traverse to the end of the list
            Node* temp = head;        // start from the head
            while (temp->next != nullptr) {
                temp = temp->next;    // move forward
            }
            // 6️⃣ Add new node at the end
            temp->next = newNode;
        }
    }

    // Function to display the list
    void display() {
        Node* temp = head;           // start from head
        while (temp != nullptr) {    // repeat until end
            cout << temp->data << " -> ";
            temp = temp->next;       // move to next node
        }
        cout << "NULL" << endl;      // end of list
    }

    // Function to delete a node by value
    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        // 1️⃣ Case 1: The first node (head) itself contains the value
        if (temp != nullptr && temp->data == value) {
            head = temp->next;       // move head to next node
            delete temp;             // free memory
            return;
        }

        // 2️⃣ Case 2: Search for the node to delete
        while (temp != nullptr && temp->data != value) {
            prev = temp;             // keep track of previous node
            temp = temp->next;       // move to next
        }

        // 3️⃣ Case 3: Value not found
        if (temp == nullptr)
            return;

        // 4️⃣ Case 4: Node found in middle or end
        prev->next = temp->next;     // unlink node from list
        delete temp;                 // free memory
    }
};

// Main function
int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List: ";
    list.display();

    cout << "Deleting node with value 20..." << endl;
    list.deleteNode(20);

    cout << "After deletion: ";
    list.display();

    return 0;
}