#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1;
    cin >> n;
    while(a <= n) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
