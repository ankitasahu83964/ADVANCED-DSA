#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << x / 5;

    if (x % 5 != 0)
        cout << ""; 

    int steps = x / 5;
    if (x % 5 != 0)
        steps++;

    cout << "\b";
    return 0;
}