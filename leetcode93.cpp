#include <iostream>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % 5 == front) {
            cout << "Queue Full\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % 5;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }

        cout << arr[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % 5;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();

    return 0;
}
