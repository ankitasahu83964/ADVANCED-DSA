#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool seen[26] = {};
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int x = s[i] - 'a';

            if (!seen[x]) {
                seen[x] = true;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
