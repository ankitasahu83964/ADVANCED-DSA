#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    for(char ch : s) {
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
            count++;
    }
    cout << count;
    return 0;
}
