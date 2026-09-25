#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    int n;
    cin >> n;

    cout << "Square = " << square(n);

    return 0;
}