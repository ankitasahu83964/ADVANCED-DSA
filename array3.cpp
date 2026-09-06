#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 8, 2, 7};
    int n = 5;
    int key = 8;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
