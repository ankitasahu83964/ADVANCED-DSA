#include <iostream>
using namespace std;
int main() {
    int n, largest = 0;
    cin >> n;
    while(n > 0) {
        int digit = n % 10;
        if(digit > largest) largest = digit;
        n /= 10;
    }
    cout << largest;
    return 0;
}
