#include <iostream>
using namespace std;
int main() {
    int n, a[100], key, position = -1;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            position = i;
            break;
        }
    }
    cout << position;
    return 0;
}
