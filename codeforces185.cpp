#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    int inside = 0, maximum = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        inside = inside - a + b;

        if (inside > maximum)
            maximum = inside;
    }

    cout << maximum;

    return 0;
}