#include <iostream>
using namespace std;
int main() {
    int n, key, found = 0;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(a[i] == key) found = 1;
    }
    if(found) cout << "Found";
    else cout << "Not Found";
    return 0;
}
