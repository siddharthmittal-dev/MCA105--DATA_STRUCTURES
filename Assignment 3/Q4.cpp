#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

int main() {
    string infix, postfix = "";
    char stack[100];
    int top = -1;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            stack[++top] = ch;
        }
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix += stack[top--];
            }

            if (top != -1)
                top--;
        }
        else {
            while (top != -1 &&
                   stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(ch)) {
                postfix += stack[top--];
            }

            stack[++top] = ch;
        }
    }

    while (top != -1)
        postfix += stack[top--];

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}