#include <iostream>
using namespace std;

int main() {
    int n, k, time = 0, ans = 0;
    cin >> n >> k;

    int available = 240 - k;

    for (int i = 1; i <= n; i++) {
        time += 5 * i;

        if (time <= available)
            ans++;
        else
            break;
    }

    cout << ans;
}