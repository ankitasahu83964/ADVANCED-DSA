#include <iostream>
using namespace std;
int main() {
    int n, a[100], mx;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    mx = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > mx) mx = a[i];
    }
    cout << mx;
    return 0;
}
