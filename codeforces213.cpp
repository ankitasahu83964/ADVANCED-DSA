#include <iostream>
#include <set>
using namespace std;

int main() {
    int y;
    cin >> y;

    y++;

    while (true) {
        int x = y;
        set<int> digits;

        while (x > 0) {
            digits.insert(x % 10);
            x /= 10;
        }

        if (digits.size() == 4) {
            cout << y;
            break;
        }

        y++;
    }

    return 0;
}