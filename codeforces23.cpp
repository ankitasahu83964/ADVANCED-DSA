#include <iostream>
using namespace std;

int main() {
    int n, a[100], x;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            found = true;
    }

    if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}