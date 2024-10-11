#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    cout << "Front element: " << myQueue.front() << endl;

    myQueue.pop();
    cout << "Front element after popping: " << myQueue.front() << endl;

    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    return 0;
}
