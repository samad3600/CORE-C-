#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Function call
    sum = add(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}
