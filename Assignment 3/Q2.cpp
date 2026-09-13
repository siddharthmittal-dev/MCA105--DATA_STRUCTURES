#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char stack[100];
    int top = -1;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        top++;
        stack[top] = str[i];
    }

    cout << "Reversed string: ";

    while (top >= 0) {
        cout << stack[top];
        top--;
    }

    cout << endl;

    return 0;
}