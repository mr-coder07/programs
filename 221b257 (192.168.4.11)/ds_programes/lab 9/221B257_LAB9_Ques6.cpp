//WAP to evaluate postfix expression
//this program is made by palak gupta(221B258)
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int evaluatePostfix(const string& postfix) {
    stack<int> operands;

    for (size_t i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {

            operands.push(ch - '0');
        } else if (ch != ' ') {

            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            switch (ch) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
                default:
                    cerr << "Invalid operator: " << ch << endl;
                    exit(1);
            }
        }
    }


    return operands.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    getline(cin, postfixExpression);

    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}

