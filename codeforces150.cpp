#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    int s = 0, d = 0, turn = 0;

    while (l <= r) {
        int x;

        if (a[l] > a[r])
            x = a[l++];
        else
            x = a[r--];

        if (turn == 0)
            s += x;
        else
            d += x;

        turn = 1 - turn;
    }

    cout << s << " " << d;
}