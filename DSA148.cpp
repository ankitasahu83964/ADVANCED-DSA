#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;

        int x = max(a, b);
        int y = max(c, d);

        int arr[4] = {a, b, c, d};
        sort(arr, arr + 4);

        if (min(x, y) > arr[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
