#include <iostream>
using namespace std;

int main() {
    int var = 20; // Declare an integer variable
    int* ptr;     // Declare a pointer to an integer

    ptr = &var;   // Assign the address of var to the pointer

    // Output the value of var
    cout << "Value of var: " << var << endl;

    // Output the address of var
    cout << "Address of var (&var): " << &var << endl;

    // Output the value stored in the pointer (address of var)
    cout << "Value stored in ptr (address of var): " << ptr << endl;

    // Output the value pointed to by the pointer (value of var)
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    return 0;
}
