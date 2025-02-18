#include <iostream>
using namespace std;
int main() {
    int n, a[100], key, pos = -1;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            pos = i;
            break;
        }
    }
    cout << pos;
    return 0;
}
