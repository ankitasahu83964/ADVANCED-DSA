#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = min(a, min(b / 2, c / 4));

    cout << result;
    return 0;
}