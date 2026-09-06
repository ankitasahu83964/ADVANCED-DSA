#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int>& q, int k) {
    stack<int> s;

    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    int t = q.size() - k;
    while (t--) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;

    for (int i = 1; i <= 5; i++)
        q.push(i);

    reverseK(q, 3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
