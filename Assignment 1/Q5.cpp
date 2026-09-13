#include <iostream>
using namespace std;

int main() {
    int arr[10][10];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter array elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;

        for (int j = 0; j < cols; j++)
            sum += arr[i][j];

        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++)
            sum += arr[i][j];

        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}