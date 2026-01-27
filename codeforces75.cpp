#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int place = 1, count = 0;

        while (n > 0) {
            if (n % 10 != 0)
                count++;
            n /= 10;
        }

        cout << count << endl;
    }
}