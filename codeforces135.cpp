#include <iostream>
using namespace std;

int main() {
    int t;
    long long n, k;

    cin >> t;

    while (t--) {
        cin >> n >> k;

        if (k * k > n) {
            cout << "NO\n";
        } else if ((n - k * k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}