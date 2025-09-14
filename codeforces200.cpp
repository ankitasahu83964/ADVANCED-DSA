#include <iostream>
using namespace std;

int main() {
    int n, x;
    long long ways = 1;
    int previous = -1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x == 1) {
            if (previous != -1)
                ways *= i - previous;

            previous = i;
        }
    }

    if (previous == -1)
        cout << 0;
    else
        cout << ways;

    return 0;
}