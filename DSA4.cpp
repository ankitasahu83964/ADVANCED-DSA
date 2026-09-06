#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = rear = 0;
    }

    void enqueue(int x) {
        arr[rear++] = x;
    }

    void dequeue() {
        if(front == rear)
            cout << "Queue Empty\n";
        else
            front++;
    }

    void display() {
        for(int i = front; i < rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    q.display();

    return 0;
}
