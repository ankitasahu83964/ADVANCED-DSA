#include <iostream>
using namespace std;

int main() {
    int i = 5;

    while (i >= 1) {
        int j = i;

        while (j <= 5) {
            cout << j;
            j++;
        }

        cout << endl;
        i--;
    }

    return 0;
}
