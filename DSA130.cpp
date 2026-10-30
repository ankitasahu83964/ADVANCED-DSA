#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int used = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        used += 5 * i;

        if (used <= time)
            count++;
        else
            break;
    }

    cout << count;
    return 0;
}
