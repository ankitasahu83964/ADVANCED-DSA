#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;
    cin >> n;

    if (n < 2)
        prime = false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}