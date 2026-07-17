#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int> s1, s2;

public:
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    int front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;
    cout << q.pop() << endl;
    cout << q.front() << endl;

    return 0;
}
