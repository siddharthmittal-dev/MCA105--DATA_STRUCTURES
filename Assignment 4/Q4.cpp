#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int frequency[256] = {0};
    char queue[100];
    int front = 0, rear = -1;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        frequency[(unsigned char)str[i]]++;
        queue[++rear] = str[i];
    }

    while (front <= rear &&
           frequency[(unsigned char)queue[front]] > 1) {
        front++;
    }

    if (front <= rear)
        cout << "First non-repeating character: " << queue[front] << endl;
    else
        cout << "No non-repeating character found.\n";

    return 0;
}