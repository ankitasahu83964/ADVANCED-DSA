#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        for (char x : s) {
            if (x == c) {
                count++;
                break;
            }
        }
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}