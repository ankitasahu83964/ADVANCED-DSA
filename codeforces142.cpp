#include <iostream>
using namespace std;

int main() {
    int n, a[100], mn = 101, mx = 0;
    int minPos = 0, maxPos = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > mx) {
            mx = a[i];
            maxPos = i;
        }

        if (a[i] <= mn) {
            mn = a[i];
            minPos = i;
        }
    }

    int ans = maxPos + (n - 1 - minPos);

    if (maxPos > minPos)
        ans--;

    cout << ans;
}