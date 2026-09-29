#include <iostream>
using namespace std;

int minimum(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << minimum(a, b);

    return 0;
}
