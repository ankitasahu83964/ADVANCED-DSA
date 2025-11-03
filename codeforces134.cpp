#include <iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n;

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        cout << min(even, odd) << endl;
    }
}