#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a;
    int y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << (a * b) / x;

    return 0;
}