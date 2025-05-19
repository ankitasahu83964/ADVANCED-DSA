#include <iostream>
using namespace std;
int main() {
    int n, key, a[100], found = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            found = 1;
            break;
        }
    }
    if(found) cout << "Found";
    else cout << "Not Found";
    return 0;
}
