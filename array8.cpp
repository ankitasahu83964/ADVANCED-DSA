#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = 6;

    int positive = 0, negative = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            positive++;
        else
            negative++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative;

    return 0;
}
