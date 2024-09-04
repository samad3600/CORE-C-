#include <iostream>
using namespace std;

class Distance {
private:
    int meter;

    // Friend function declaration
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};

// Friend function definition
int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D) << endl;
    return 0;
}
