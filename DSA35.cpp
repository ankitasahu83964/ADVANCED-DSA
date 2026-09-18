#include <iostream>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    switch(ch) {

        case 'R':
            cout << "Stop";
            break;

        case 'Y':
            cout << "Wait";
            break;

        case 'G':
            cout << "Go";
            break;

        default:
            cout << "Invalid";
    }

    return 0;
}
