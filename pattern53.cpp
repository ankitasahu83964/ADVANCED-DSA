#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 7) {
        int j = 1;

        while (j <= (i + 1) / 2) {
            cout << i;
            j++;
        }

        cout << endl;
        i += 2;
    }

    return 0;
}
