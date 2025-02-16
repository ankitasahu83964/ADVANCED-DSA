#include <iostream>
using namespace std;
int main() {
    int n, a[100], even = 0, odd = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    cout << even << " " << odd;
    return 0;
}
