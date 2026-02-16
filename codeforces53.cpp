#include <iostream>
using namespace std;

int main() {
    int n, x;
    int positive = 0, negative = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x > 0)
            positive++;
        else if (x < 0)
            negative++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative;

    return 0;
}