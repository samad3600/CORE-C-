#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    // Incrementing the pointer
    cout << "Initial address: " << ptr << endl;
    cout << "Value at initial address: " << *ptr << endl;
    ptr++;
    cout << "Address after increment: " << ptr << endl;
    cout << "Value at incremented address: " << *ptr << endl;

    // Decrementing the pointer
    ptr--;
    cout << "Address after decrement: " << ptr << endl;
    cout << "Value at decremented address: " << *ptr << endl;

    // Adding a constant to the pointer
    ptr = ptr + 2;
    cout << "Address after adding 2: " << ptr << endl;
    cout << "Value at new address: " << *ptr << endl;

    // Subtracting a constant from the pointer
    ptr = ptr - 1;
    cout << "Address after subtracting 1: " << ptr << endl;
    cout << "Value at new address: " << *ptr << endl;

    // Subtracting two pointers
    int* ptr2 = &arr[4];
    int difference = ptr2 - ptr;
    cout << "Difference between ptr2 and ptr: " << difference << endl;

    return 0;
}
