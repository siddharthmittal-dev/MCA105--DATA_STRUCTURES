#include <iostream>
using namespace std;

#define MAX 100

int q1[MAX], q2[MAX];
int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;

void push(int value) {
    q2[++rear2] = value;

    while (front1 <= rear1)
        q2[++rear2] = q1[front1++];

    for (int i = 0; i <= rear2; i++)
        q1[i] = q2[i];

    rear1 = rear2;
    front1 = 0;

    front2 = 0;
    rear2 = -1;
}

void pop() {
    if (front1 > rear1) {
        cout << "Stack Underflow\n";
        return;
    }

    cout << "Popped element: " << q1[front1++] << endl;

    if (front1 > rear1)
        front1 = 0, rear1 = -1;
}

void peek() {
    if (front1 > rear1)
        cout << "Stack is empty.\n";
    else
        cout << "Top element: " << q1[front1] << endl;
}

void display() {
    if (front1 > rear1) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = rear1; i >= front1; i--)
        cout << q1[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n----- STACK USING TWO QUEUES -----\n";
        cout << "1. PUSH\n";
        cout << "2. POP\n";
        cout << "3. PEEK\n";
        cout << "4. DISPLAY\n";
        cout << "5. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}