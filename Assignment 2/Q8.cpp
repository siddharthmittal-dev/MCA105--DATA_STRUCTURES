#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int distinct = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool isDistinct = true;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct)
            distinct++;
    }

    cout << "Number of distinct elements = " << distinct << endl;

    return 0;
}