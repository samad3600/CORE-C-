#include <iostream>
using namespace std;

class Person {
public:
    char name[100];
    int code;
    void input() {
        cout << "Enter the name of the person: ";
        cin >> name;
        cout << "Enter the code of the person: ";
        cin >> code;
    }
    void display() {
        cout << "Name of the person: " << name << endl;
        cout << "Code of the person: " << code << endl;
    }
};

class Account : virtual public Person {
public:
    float pay;
    void getPay() {
        cout << "Enter the pay: ";
        cin >> pay;
    }
    void display() {
        cout << "Pay: " << pay << endl;
    }
};

class Admin : virtual public Person {
public:
    int experience;
    void getExperience() {
        cout << "Enter the experience: ";
        cin >> experience;
    }
    void display() {
        cout << "Experience: " << experience << endl;
    }
};

class Master : public Account, public Admin {
public:
    char companyName[100];
    void getCompanyName() {
        cout << "Enter the company name: ";
        cin >> companyName;
    }
    void display() {
        cout << "Company name: " << companyName << endl;
    }
};

int main() {
    Master m1;
    m1.input();
    m1.getPay();
    m1.getExperience();
    m1.getCompanyName();
    m1.Person::display();
    m1.Account::display();
    m1.Admin::display();
    m1.display();
    return 0;
}
