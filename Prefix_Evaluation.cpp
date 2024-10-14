#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

double evaluatePrefix(string prefixExp) {
    stack<double> operandStack;
    for (int i = prefixExp.size() - 1; i >= 0; i--) {
        if (isdigit(prefixExp[i]))
            operandStack.push(prefixExp[i] - '0');
        else {
            double op1 = operandStack.top();
            operandStack.pop();
            double op2 = operandStack.top();
            operandStack.pop();
            switch (prefixExp[i]) {
                case '+':
                    operandStack.push(op1 + op2);
                    break;
                case '-':
                    operandStack.push(op1 - op2);
                    break;
                case '*':
                    operandStack.push(op1 * op2);
                    break;
                case '/':
                    operandStack.push(op1 / op2);
                    break;
                default:
                    cout << "Invalid expression" << endl;
                    return -1;
            }
        }
    }
    return operandStack.top();
}

int main() {
    string prefixExp = "*+69-31"; // Example expression
    cout << "Result of prefix expression: " << evaluatePrefix(prefixExp) << endl;
    return 0;
}
