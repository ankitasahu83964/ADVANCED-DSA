#include <iostream>
using namespace std;

int main() {
    int n, x, police = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x == -1) {
            if (police > 0)
                police--;
            else
                ans++;
        } else {
            police += x;
        }
    }

    cout << ans;
}