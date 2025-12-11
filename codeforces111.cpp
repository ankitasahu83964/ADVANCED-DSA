#include <iostream>
using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    while (t--) {
        cin >> n >> s;

        for (char c : s) {
            if (c == 'L')
                cout << 'L';
            else if (c == 'R')
                cout << 'R';
            else if (c == 'U')
                cout << 'D';
            else
                cout << 'U';
        }

        cout << endl;
    }
}