#include <iostream>
using namespace std;

int main() {
    // Arithmetic operators
    int a = 7, b = 2;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // Assignment operators
    int x = 5;

    // Relational operators
    bool result = (a > b);
    cout << "a > b: " << result << endl;

    // Logical operators
    bool condition1 = true, condition2 = false;
    cout << "condition1 && condition2: " << (condition1 && condition2) << endl;
    cout << "condition1 || condition2: " << (condition1 || condition2) << endl;
    cout << "!condition1: " << !condition1 << endl;

    // Unary or (Increment and decrement) operators
    int num = 10;
    cout << "num++ (post-increment): " << num++ << endl;
    cout << "++num (pre-increment): " << ++num << endl;

    // Compound assignment operators
    int value = 3;
    value += 2;
    cout << "value += 2: " << value << endl;
    // Ternary Operators
    double marks;
    cout << "Enter your marks: ";
    cin >> marks;

    string result = (marks >= 40) ? "passed" : "failed";
    cout << "You " << result << " the exam.";

    return 0;
}
