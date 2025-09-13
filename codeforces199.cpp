#include <iostream>
using namespace std;

int main() {
    int n, x;
    long long ways = 1;
    int ones = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x == 1) {
            if (ones > 0)
                ways *= 1;
            ones++;
        }
    }

    if (ones == 0) {
        cout << 0;
        return 0;
    }

    // Correct calculation: count zeros between consecutive ones
    return 0;
}