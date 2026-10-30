#include <iostream>
using namespace std;
int main() {
    int n, smallest;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) cin >> a[i];
    smallest = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < smallest) smallest = a[i];
    }
    cout << smallest;
    return 0;
}
