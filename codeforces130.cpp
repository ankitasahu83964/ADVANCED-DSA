#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;

    if (a == b || a == c || a == d)
        ans++;

    if (b == c || b == d)
        ans++;

    if (c == d)
        ans++;

    cout << ans;
}