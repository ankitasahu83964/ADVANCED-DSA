#include <iostream>
using namespace std;

int main() {
    int i = 2;
    int j;

    while (i <= 8) {
        j = 1;

        while (j <= i / 2) {
            cout << i;
            j++;
        }

        cout << endl;
        i += 2;
    }

    return 0;
}
