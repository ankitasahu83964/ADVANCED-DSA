#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string word = "hello";
    int j = 0;

    for (char c : s) {
        if (j < 5 && c == word[j])
            j++;
    }

    if (j == 5)
        cout << "YES";
    else
        cout << "NO";
}