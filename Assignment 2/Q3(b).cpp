#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements in sorted order:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int low = 0, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Missing number = " << low + 1 << endl;

    return 0;
}