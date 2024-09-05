#include <iostream>
using namespace std;

void print(int i) {
    cout << "Here is int: " << i << endl;
}

void print(double f) {
    cout << "Here is float: " << f << endl;
}

void print(const char* c) {
    cout << "Here is char*: " << c << endl;
}

int main() {
    print(10);       // Calls print(int)
    print(10.10);    // Calls print(double)
    print("ten");    // Calls print(const char*)
    return 0;
}
