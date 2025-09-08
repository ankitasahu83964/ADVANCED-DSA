#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex])
            maxIndex = i;

        if (a[i] <= a[minIndex])
            minIndex = i;
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        swaps--;

    cout << swaps;
    return 0;
}