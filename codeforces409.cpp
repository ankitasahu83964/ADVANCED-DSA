#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int i = 0, j = s.length() - 1;
    while(i < j) {
        if(s[i] != s[j]) {
            cout << "Not Palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout << "Palindrome";
    return 0;
}
