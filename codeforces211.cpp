#include <iostream>
using namespace std;

int main() {
    int n, m, c;
    int mishka = 0, chris = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m >> c;

        if (m > c)
            mishka++;
        else if (c > m)
            chris++;
    }

    if (mishka > chris)
        cout << "Mishka";
    else if (chris > mishka)
        cout << "Chris";
    else
        cout << "Friendship";

    return 0;
}