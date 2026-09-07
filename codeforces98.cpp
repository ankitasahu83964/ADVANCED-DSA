#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for (char c : s) {
        if (j < 5 && c == target[j])
            j++;
    }

    cout << (j == 5 ? "YES" : "NO");
}