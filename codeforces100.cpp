#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    bool diff = false;

    while (n--) {
        cin >> a >> b;

        if (a != b)
            diff = true;
    }

    if (diff)
        cout << "rated";
    else
        cout << "unrated";
}