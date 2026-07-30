#include <iostream>
using namespace std;

int square(int a) {
    return a * a;
}

int main() {
    int n;
    cin >> n;

    cout << "Square = " << square(n);

    return 0;
}