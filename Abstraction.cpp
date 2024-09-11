#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void askForPromotion() = 0; // Pure virtual function
};

class Employee : public AbstractEmployee {
private:
    string name;
    int age;

public:
    Employee(string n, int a) : name(n), age(a) {}

    void askForPromotion() override {
        if (age > 30)
            cout << name << " got promoted!" << endl;
        else
            cout << name << " is not eligible for promotion." << endl;
    }
};

int main() {
    Employee emp1("John", 35);
    emp1.askForPromotion();
    return 0;
}
