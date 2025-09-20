#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int highest = x, lowest = x;
    int count = 0;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > highest) {
            highest = x;
            count++;
        }
        else if (x < lowest) {
            lowest = x;
            count++;
        }
    }

    cout << count;
    return 0;
}