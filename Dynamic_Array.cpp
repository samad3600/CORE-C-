#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};
    numbers.push_back(40);
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}
