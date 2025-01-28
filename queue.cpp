#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    Queue(int n) {
        size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == size - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << value << " inserted into the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " removed from the queue." << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int size;

    cout << "Enter the size of the queue: ";
    cin >> size;

    Queue q(size);

    int choice, value;
    do {
        cout << "\nMenu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}