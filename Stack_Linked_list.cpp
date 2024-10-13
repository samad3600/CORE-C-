#include <iostream>
using namespace std;

// Define a Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Initialize the top of the stack
Node* top = nullptr;

// Push operation: Add an element to the top of the stack
void push(int val) {
    Node* newnode = new Node;
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

// Pop operation: Remove the top element from the stack
void pop() {
    if (top == nullptr)
        cout << "Stack Underflow" << endl;
    else {
        cout << "Popped element: " << top->data << endl;
        top = top->next;
    }
}

// Display the elements in the stack
void display() {
    Node* ptr = top;
    if (ptr == nullptr)
        cout << "Stack is empty" << endl;
    else {
        cout << "Stack elements: ";
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
}

int main() {
    int choice, val;
    cout << "1) Push into stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
