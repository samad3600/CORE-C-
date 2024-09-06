#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Parent parentObj;
    Child childObj;

    parentObj.show();  // Calls Parent's show method
    childObj.show();   // Calls Child's show method

    Parent* ptr;
    ptr = &childObj;
    ptr->show();       // Calls Child's show method due to polymorphism

    return 0;
}
