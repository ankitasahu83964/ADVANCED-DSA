#include <iostream>
using namespace std;

int main() {
    long long n, m, x, current = 1, time = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> x;

        if (x >= current)
            time += x - current;
        else
            time += n - current + x;

        current = x;
    }

    cout << time;

    return 0;
}