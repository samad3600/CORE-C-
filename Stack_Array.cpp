#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE]; // Array to store stack elements
    int top; // Index of the top element

public:
    Stack() {
        top = -1; // Initialize the top index
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push more elements." << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << "Popped element: " << arr[top--] << endl;
    }

    void display() {
        if (top >= 0) {
            cout << "Stack elements:";
            for (int i = top; i >= 0; --i)
                cout << " " << arr[i];
            cout << endl;
        } else {
            cout << "Stack is empty." << endl;
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    myStack.pop();
    myStack.display();

    return 0;
}
