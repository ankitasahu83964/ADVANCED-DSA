#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int upper = 0, lower = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else
            lower++;
    }

    if (upper > lower) {
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
    } else {
        for (int i = 0; i < s.length(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
    }

    cout << s;
    return 0;
}