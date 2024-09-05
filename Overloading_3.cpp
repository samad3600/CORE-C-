#include <iostream>
using namespace std;

void add(int a, double b) {
    cout << "Sum = " << (a + b) << endl;
}

void add(double a, int b) {
    cout << "Sum = " << (a + b) << endl;
}

int main() {
    add(10, 2.5);    // Calls add(int, double)
    add(5.5, 6);     // Calls add(double, int)
    return 0;
}
