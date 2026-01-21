#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, prev;
    cin >> prev;

    int ans = 1, count = 1;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > prev)
            count++;
        else
            count = 1;

        ans = max(ans, count);
        prev = x;
    }

    cout << ans;
}