#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if (rear == 99) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = x;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;
        front++;
    }

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    q.display();

    cout << endl;

    q.dequeue();

    q.display();

    return 0;
}
