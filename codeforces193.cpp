#include <iostream>
using namespace std;

int main() {
    int n, cubes = 0, height = 0;
    cin >> n;

    for (int i = 1; ; i++) {
        cubes += i * (i + 1) / 2;

        if (height + cubes > n)
            break;

        height += cubes;
    }

    cout << height;
    return 0;
}