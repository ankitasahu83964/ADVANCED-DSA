#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100], sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n, greater<int>());

    int mine = 0, count = 0;

    for (int i = 0; i < n; i++) {
        mine += a[i];
        count++;

        if (mine > sum / 2)
            break;
    }

    cout << count;
}