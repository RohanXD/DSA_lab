#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size, count;
    int* arr;

public:
    CircularQueue(int n) {
        size = n;
        front = -1;
        rear = -1;
        count = 0;
        arr = new int[size];
    }

    bool isEmpty() {
        return (count == 0);
    }

    bool isFull() {
        return (count == size);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        count++;
        cout << value << " inserted into the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " removed from the queue." << endl;
        front = (front + 1) % size;
        count--;

        if (count == 0) {
            front = rear = -1;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % size] << " ";
        }
        cout << endl;
    }

    void totalElements() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Total number of elements in the queue: " << count << endl;
        }
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    int size;

    cout << "Enter the size of the circular queue: ";
    cin >> size;

    CircularQueue q(size);

    int choice, value;
    do {
        cout << "\nMenu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Total Elements\n5. Exit\nEnter your choice: ";
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
            q.totalElements();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

