#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize the top index
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack overflow! Cannot push more elements." << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();
    cout << "Top element after popping: " << myStack.peek() << endl;

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
