#include <iostream>
#include <algorithm> // For std::find
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;

    auto it = find(arr.begin(), arr.end(), target); // Using std::find

    if (it != arr.end())
        cout << "Element found at index " << distance(arr.begin(), it) << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
