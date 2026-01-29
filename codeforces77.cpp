#include <iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n >> x;

        if (n == 1)
            cout << 1 << endl;
        else
            cout << (n - 2) / x + 2 << endl;
    }
}