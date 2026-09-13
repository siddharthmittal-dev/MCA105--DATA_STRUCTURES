#include <iostream>
#include <string>
using namespace std;

int main() {
    string expression;
    char stack[100];
    int top = -1;
    bool balanced = true;

    cout << "Enter an expression: ";
    getline(cin, expression);

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (top == -1) {
                balanced = false;
                break;
            }

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                balanced = false;
                break;
            }
        }
    }

    if (top != -1)
        balanced = false;

    if (balanced)
        cout << "Parentheses are balanced.\n";
    else
        cout << "Parentheses are not balanced.\n";

    return 0;
}