#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    MyClass obj; // Creating an object of MyClass, which calls the constructor
    return 0;    // When the program ends, the destructor is called automatically
}
