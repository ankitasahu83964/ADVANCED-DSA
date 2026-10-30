#include <iostream>
using namespace std;
int main() {
    int a, b, x, y;
    cin >> a >> b;
    x = a;
    y = b;
    while(y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    cout << (a * b) / x;
    return 0;
}
