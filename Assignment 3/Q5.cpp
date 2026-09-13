#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    string postfix;
    int stack[100];
    int top = -1;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            stack[++top] = ch - '0';
        }
        else {
            int b = stack[top--];
            int a = stack[top--];

            switch (ch) {
                case '+':
                    stack[++top] = a + b;
                    break;

                case '-':
                    stack[++top] = a - b;
                    break;

                case '*':
                    stack[++top] = a * b;
                    break;

                case '/':
                    stack[++top] = a / b;
                    break;

                case '%':
                    stack[++top] = a % b;
                    break;

                case '^':
                    stack[++top] = pow(a, b);
                    break;
            }
        }
    }

    cout << "Result = " << stack[top] << endl;

    return 0;
}