#include <iostream>
using namespace std;

int main() {
    int n, p, x;
    cin >> n >> p;

    bool level[100] = {};

    while (p--) {
        cin >> x;
        level[x] = true;
    }

    cin >> p;

    while (p--) {
        cin >> x;
        level[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!level[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
}