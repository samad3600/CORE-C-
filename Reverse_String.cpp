#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // Reverse the string using std::reverse()
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;
    return 0;
}
