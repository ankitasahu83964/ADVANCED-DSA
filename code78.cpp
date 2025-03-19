#include <iostream>
using namespace std;
int main() {
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int smallest = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < smallest) smallest = a[i];
    cout << smallest;
    return 0;
}
