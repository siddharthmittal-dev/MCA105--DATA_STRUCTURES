#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    k = k % n;

    cout << "1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        for (int r = 0; r < k; r++) {
            int temp = arr[0];

            for (int i = 0; i < n - 1; i++)
                arr[i] = arr[i + 1];

            arr[n - 1] = temp;
        }
    }
    else if (choice == 2) {
        for (int r = 0; r < k; r++) {
            int temp = arr[n - 1];

            for (int i = n - 1; i > 0; i--)
                arr[i] = arr[i - 1];

            arr[0] = temp;
        }
    }
    else {
        cout << "Invalid choice.\n";
        return 0;
    }

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}