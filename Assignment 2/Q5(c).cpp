#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter order of matrix: ";
    cin >> n;

    int a[100][100];

    cout << "Enter lower triangular elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> a[i][j];

    cout << "Lower Triangular Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}