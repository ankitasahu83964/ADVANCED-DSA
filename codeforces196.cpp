#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100], total = 0, sum = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++) {
        sum += a[i];
        count++;

        if (sum > total - sum)
            break;
    }

    cout << count;
    return 0;
}