#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool a[26] = {};

    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        a[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!a[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}