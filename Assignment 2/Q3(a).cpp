#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
        sum -= arr[i];

    cout << "Missing number = " << sum << endl;

    return 0;
}