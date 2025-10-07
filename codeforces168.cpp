#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string a = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+')
            a += s[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.length(); i++) {
        cout << a[i];

        if (i < a.length() - 1)
            cout << "+";
    }

    return 0;
}