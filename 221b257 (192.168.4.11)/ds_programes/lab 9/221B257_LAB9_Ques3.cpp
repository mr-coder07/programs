//WAP to convert an expression from postfix to infix.
//this program is made by palak gupta(221B258)
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string postfixToInfix(const string& postfix) {
    stack<string> s;

    for (size_t i = 0; i < postfix.length(); ++i) {
        char ch = postfix[i];
        if (!isOperator(ch)) {

            s.push(string(1, ch));
        } else {

            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();


            string infixExpr = "(" + operand1 + ch + operand2 + ")";
            s.push(infixExpr);
        }
    }


    return s.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    cin >> postfixExpression;

    string infixExpression = postfixToInfix(postfixExpression);
    cout << "Infix expression: " << infixExpression << endl;

    return 0;
}
