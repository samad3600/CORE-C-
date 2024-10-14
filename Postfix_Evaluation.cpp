#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

float postfixEval(string postfix) {
    stack<float> stk;
    for (char ch : postfix) {
        if (isdigit(ch))
            stk.push(ch - '0'); // Convert character to integer
        else {
            float a = stk.top();
            stk.pop();
            float b = stk.top();
            stk.pop();
            switch (ch) {
                case '+':
                    stk.push(b + a);
                    break;
                case '-':
                    stk.push(b - a);
                    break;
                case '*':
                    stk.push(b * a);
                    break;
                case '/':
                    stk.push(b / a);
                    break;
                case '^':
                    stk.push(pow(b, a)); // b raised to the power of a
                    break;
                default:
                    cout << "Invalid operator: " << ch << endl;
                    return -1; // Error
            }
        }
    }
    return stk.top();
}

int main() {
    string postfixExp = "21+3*"; // Example expression
    float result = postfixEval(postfixExp);
    cout << "Result of postfix expression: " << result << endl;
    return 0;
}
