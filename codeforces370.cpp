#include <iostream>
using namespace std;
int main() {
    int n, a[100], evenSum = 0, oddSum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) evenSum += a[i];
        else oddSum += a[i];
    }
    cout << evenSum << " " << oddSum;
    return 0;
}
