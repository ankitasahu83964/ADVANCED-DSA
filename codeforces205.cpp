#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int count = 1;

    while (true) {
        int price = k * count;

        if (price % 10 == 0 || price % 10 == r)
            break;

        count++;
    }

    cout << count;
    return 0;
}