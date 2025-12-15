#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool found[26] = {};

    for (char c : s)
        found[tolower(c) - 'a'] = true;

    for (int i = 0; i < 26; i++) {
        if (!found[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}