#include <iostream>
using namespace std;

int main() {
    int n, p[101];

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}