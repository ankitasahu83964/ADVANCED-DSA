#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue Empty";
        return;
    }

    Node* temp = front;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display() {
    Node* temp = front;

    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    cout << endl;

    dequeue();

    display();
}
