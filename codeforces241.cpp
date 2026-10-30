#include <iostream>
using namespace std;
int main() {
    int n, largest;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) cin >> a[i];
    largest = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > largest) largest = a[i];
    }
    cout << largest;
    return 0;
}
