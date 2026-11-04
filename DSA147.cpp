#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        if (n == 1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++)
                cout << 2;

            cout << endl;
        }
    }

    return 0;
}
