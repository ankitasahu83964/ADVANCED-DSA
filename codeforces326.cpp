#include <iostream>
using namespace std;
int main() {
    int n, even = 0, odd = 0;
    cin >> n;
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    cout << even << " " << odd;
    return 0;
}
