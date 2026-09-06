#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int n1 = 3, n2 = 3;
    int arr3[6];

    for(int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    for(int i = 0; i < 6; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
