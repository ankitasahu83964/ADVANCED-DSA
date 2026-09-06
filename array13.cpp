#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15, 25};
    int n = 6;

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "Third Largest = " << third;
    return 0;
}
