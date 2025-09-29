#include <iostream>
using namespace std;

int main() {
    int n, x, previous = 0, groups = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (i == 0 || x != previous)
            groups++;

        previous = x;
    }

    cout << groups;
    return 0;
}