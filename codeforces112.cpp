#include <iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n;

        int mx = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;

            if (x > mx) {
                mx = x;
                ans = 1;
            } else if (x == mx) {
                ans++;
            }
        }

        cout << ans << endl;
    }
}