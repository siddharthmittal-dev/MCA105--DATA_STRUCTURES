#include <iostream>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull())
        cout << "Stack Overflow\n";
    else {
        top++;
        stackArr[top] = value;
        cout << "Element pushed successfully.\n";
    }
}

void pop() {
    if (isEmpty())
        cout << "Stack Underflow\n";
    else {
        cout << "Deleted element: " << stackArr[top] << endl;
        top--;
    }
}

void peek() {
    if (isEmpty())
        cout << "Stack is empty.\n";
    else
        cout << "Top element: " << stackArr[top] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n----- STACK MENU -----\n";
        cout << "1. PUSH\n";
        cout << "2. POP\n";
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
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (isEmpty())
                    cout << "Stack is empty.\n";
                else
                    cout << "Stack is not empty.\n";
                break;

            case 4:
                if (isFull())
                    cout << "Stack is full.\n";
                else
                    cout << "Stack is not full.\n";
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