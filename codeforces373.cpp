#include <iostream>
using namespace std;
int main() {
    int n, a[100], sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) sum += a[i] * a[i];
    cout << sum;
    return 0;
}
