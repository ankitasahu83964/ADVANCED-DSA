#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    int inside = 0, ans = 0;

    cin >> n;

    while (n--) {
        cin >> a >> b;
        inside -= a;
        inside += b;

        ans = max(ans, inside);
    }

    cout << ans;
}