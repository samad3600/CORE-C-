#include <iostream>
using namespace std;

int main() {
    // 1. For Loop
    cout << "For Loop (1 to 5): ";
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // 2. While Loop
    cout << "While Loop (10 to 6): ";
    int j = 10;
    while (j >= 6) {
        cout << j << " ";
        --j;
    }
    cout << endl;

    // 3. Do...While Loop
    cout << "Do...While Loop (3 to 7): ";
    int k = 3;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 7);
    cout << endl;

    return 0;
}
