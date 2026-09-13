#include <iostream>
using namespace std;

int main() {
    int a[20][20], b[20][20], c[20][20];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter first sparse matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter second sparse matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> b[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Addition of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    return 0;
}