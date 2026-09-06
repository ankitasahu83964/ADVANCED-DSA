#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    bool palindrome = true;

    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
