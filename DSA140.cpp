#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int place = 1;
        int count = 0;
        int a[5];

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                a[count] = digit * place;
                count++;
            }

            n /= 10;
            place *= 10;
        }

        cout << count << endl;

        for (int i = 0; i < count; i++)
            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}
