#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.eat();   // Calling base class function
    dog1.sleep(); // Calling base class function
    dog1.bark();  // Calling derived class function
    return 0;
}
