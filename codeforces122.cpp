#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    while (n--) {
        cin >> a >> b;

        if (a != b) {
            cout << "rated";
            return 0;
        }
    }

    cout << "unrated";
}