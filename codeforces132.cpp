#include <iostream>
using namespace std;

int main() {
    int n;
    string s, prev;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (i == 0 || s != prev)
            ans++;

        prev = s;
    }

    cout << ans;
}