#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    int leftOpen = 0, rightOpen = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        leftOpen += l;
        rightOpen += r;
    }

    int left = min(leftOpen, n - leftOpen);
    int right = min(rightOpen, n - rightOpen);

    cout << left + right;
}