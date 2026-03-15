#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cin >> n;

    original = n;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}