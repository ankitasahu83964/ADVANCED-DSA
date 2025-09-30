#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool seen[26] = {};
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        int x = s[i] - 'a';

        if (!seen[x]) {
            seen[x] = true;
            count++;
        }
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}