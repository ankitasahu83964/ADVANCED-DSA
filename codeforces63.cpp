#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (char c : s) {
        if (c != '+')
            cout << c << "+";
    }
}