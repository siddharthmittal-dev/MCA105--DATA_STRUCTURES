#include <iostream>
using namespace std;

int main() {
    int queue[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter queue elements:\n";
    for (int i = 0; i < n; i++)
        cin >> queue[i];

    int result[100];
    int mid = n / 2;
    int k = 0;

    for (int i = 0; i < mid; i++) {
        result[k++] = queue[i];
        result[k++] = queue[mid + i];
    }

    if (n % 2 != 0)
        result[k++] = queue[n - 1];

    cout << "Interleaved queue: ";
    for (int i = 0; i < k; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}