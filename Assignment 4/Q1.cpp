#include <iostream>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = -1, rear = -1;

bool isEmpty() {
    return front == -1 || front > rear;
}

bool isFull() {
    return rear == MAX - 1;
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue Overflow\n";
    } else {
        if (front == -1)
            front = 0;

        queueArr[++rear] = value;
        cout << "Element inserted successfully.\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
    } else {
        cout << "Deleted element: " << queueArr[front] << endl;
        front++;

        if (front > rear)
            front = rear = -1;
    }
}

void peek() {
    if (isEmpty())
        cout << "Queue is empty.\n";
    else
        cout << "Front element: " << queueArr[front] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n----- SIMPLE QUEUE MENU -----\n";
        cout << "1. ENQUEUE\n";
        cout << "2. DEQUEUE\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. DISPLAY\n";
        cout << "6. PEEK\n";
        cout << "7. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                cout << (isEmpty() ? "Queue is empty.\n"
                                   : "Queue is not empty.\n");
                break;

            case 4:
                cout << (isFull() ? "Queue is full.\n"
                                  : "Queue is not full.\n");
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}