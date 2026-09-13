#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10][100], temp[100];
    int n;

    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++)
        cin.getline(str[i], 100);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++)
        cout << str[i] << endl;

    return 0;
}