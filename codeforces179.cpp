#include <iostream>
#include <set>
using namespace std;

int main() {
    int y;
    cin >> y;

    y++;

    while (true) {
        int a = y;
        set<int> digits;

        while (a > 0) {
            digits.insert(a % 10);
            a /= 10;
        }

        if (digits.size() == 4) {
            cout << y;
            break;
        }

        y++;
    }

    return 0;
}