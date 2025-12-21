#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    for (char c : s) {
        if (c != '4' && c != '7') {
            cout << "NO";
            return 0;
        }
    }

    sort(s.begin(), s.end());

    string a = s.substr(0, n / 2);
    string b = s.substr(n / 2);

    if (a == b)
        cout << "YES";
    else
        cout << "NO";
}