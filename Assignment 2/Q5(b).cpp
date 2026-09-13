#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter order of matrix: ";
    cin >> n;

    int a[100], b[100], c[100];

    cout << "Enter main diagonal elements:\n";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "Enter upper diagonal elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    cout << "Enter lower diagonal elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> c[i];

    cout << "Tri-Diagonal Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << b[i] << " ";
            else if (j == i + 1)
                cout << a[i] << " ";
            else if (i == j + 1)
                cout << c[j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}