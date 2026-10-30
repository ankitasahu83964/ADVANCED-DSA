#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = n - 1; i > 0; i--) {
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
