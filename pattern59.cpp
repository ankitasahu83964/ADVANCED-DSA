#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n = 10;

    while (i <= 3) {
        int j = 1;

        while (j <= i) {
            cout << n;
            n++;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
