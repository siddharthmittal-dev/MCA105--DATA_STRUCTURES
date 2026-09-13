#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' &&
            ch != 'O' && ch != 'U') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    cout << "String after deleting vowels: " << str << endl;

    return 0;
}