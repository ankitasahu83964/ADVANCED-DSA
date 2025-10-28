#include <iostream>
using namespace std;

int main() {
    int n, x;
    int police = 0, crimes = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x > 0)
            police += x;
        else {
            if (police > 0)
                police--;
            else
                crimes++;
        }
    }

    cout << crimes;

    return 0;
}