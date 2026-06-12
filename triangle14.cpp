#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0; i < n; i++) {
        char ch = 'E' - i;

        for(char j = ch; j <= 'E'; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
