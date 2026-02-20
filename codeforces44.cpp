#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool palindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i])
            palindrome = false;
    }

    if (palindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}