#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum = " << (a + b) << endl;
}

void add(int a, int b, int c) {
    cout << "Sum = " << (a + b + c) << endl;
}

int main() {
    add(10, 2);      // Calls add(int, int)
    add(5, 6, 4);    // Calls add(int, int, int)
    return 0;
}
