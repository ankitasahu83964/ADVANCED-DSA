#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int a[101];

    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x] = i;
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}