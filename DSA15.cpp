#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0, maximum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            if(count > maximum)
                maximum = count;
        } else {
            count = 0;
        }
    }

    cout << "Maximum Consecutive 1's = " << maximum;

    return 0;
}
