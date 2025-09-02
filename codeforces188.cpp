#include <iostream>
using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int a = min(k2, min(k5, k6));
    int sum = a * 256;

    k2 -= a;
    int b = min(k2, k3);

    sum += b * 32;

    cout << sum;

    return 0;
}