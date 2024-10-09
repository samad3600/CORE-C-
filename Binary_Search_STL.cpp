#include <iostream>
#include <algorithm> // For std::binary_search
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50}; // The array must be sorted for binary search
    int target = 30;

    if (binary_search(arr.begin(), arr.end(), target))
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
