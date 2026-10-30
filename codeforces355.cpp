#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n >= 1 && n <= 12) cout << "Valid Month";
    else cout << "Invalid Month";
    return 0;
}
