#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if(top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    void peek() {
        if(top == -1)
            cout << "Stack Empty";
        else
            cout << arr[top];
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();

    cout << endl;

    s.peek();

    return 0;
}
