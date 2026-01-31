#include <iostream>
using namespace std;

int main() {
    int n, h, x, ans = 0;
    cin >> n >> h;

    while (n--) {
        cin >> x;

        if (x <= h)
            ans += 1;
        else
            ans += 2;
    }

    cout << ans;
}