#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter order of matrix: ";
    cin >> n;

    int a[100][100];

    cout << "Enter lower triangular elements including diagonal:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }

    cout << "Symmetric Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    return 0;
}