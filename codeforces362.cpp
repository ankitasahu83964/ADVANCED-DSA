#include <iostream>
using namespace std;
int main() {
    int n, digit, smallest = 9;
    cin >> n;
    while(n > 0) {
        digit = n % 10;
        if(digit < smallest) smallest = digit;
        n /= 10;
    }
    cout << smallest;
    return 0;
}
