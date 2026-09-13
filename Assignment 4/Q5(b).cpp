#include <iostream>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = 0, rear = -1;

void push(int value) {
    if (rear == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }

    queueArr[++rear] = value;

    int size = rear - front + 1;

    for (int i = 0; i < size - 1; i++) {
        queueArr[++rear] = queueArr[front++];
    }

    cout << "Element pushed successfully.\n";
}

void pop() {
    if (front > rear) {
        cout << "Stack Underflow\n";
        return;
    }

    cout << "Popped element: " << queueArr[front++] << endl;

    if (front > rear)
        front = 0, rear = -1;
}

void peek() {
    if (front > rear)
        cout << "Stack is empty.\n";
    else
        cout << "Top element: " << queueArr[front] << endl;
}

void display() {
    if (front > rear) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";

    for (int i = rear; i >= front; i--)
        cout << queueArr[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n----- STACK USING ONE QUEUE -----\n";
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