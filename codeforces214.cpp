#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool change = true;

    for (int i = 1; i < s.length(); i++) {
        if (!isupper(s[i]))
            change = false;
    }

    if (change) {
        for (int i = 0; i < s.length(); i++) {
            if (i == 0)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}