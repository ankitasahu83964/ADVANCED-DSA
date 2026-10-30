#include <iostream>
using namespace std;
int main() {
    int n, first, last;
    cin >> n;
    last = n % 10;
    while(n >= 10) n /= 10;
    first = n;
    cout << first + last;
    return 0;
}
