#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    string s, prev = "";

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s != prev)
            count++;

        prev = s;
    }

    cout << count;
}