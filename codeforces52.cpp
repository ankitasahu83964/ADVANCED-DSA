#include <iostream>
using namespace std;

int main() {
    int n, x;
    int even = 0, odd = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x % 2 == 0)
            even += x;
        else
            odd += x;
    }

    cout << "Even Sum = " << even << endl;
    cout << "Odd Sum = " << odd;

    return 0;
}