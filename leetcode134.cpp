#include <iostream>
#include <vector>
using namespace std;

void KMP(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    vector<int> lps(m, 0);

    // Create LPS array
    for (int i = 1, len = 0; i < m;) {
        if (pattern[i] == pattern[len]) {
            lps[i++] = ++len;
        } 
        else if (len != 0) {
            len = lps[len - 1];
        } 
        else {
            lps[i++] = 0;
        }
    }

    int i = 0, j = 0;

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Pattern found at index "
                 << i - j << endl;
            j = lps[j - 1];
        }
        else if (i < n && text[i] != pattern[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";

    KMP(text, pattern);

    return 0;
}
