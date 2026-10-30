#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int count = 0;
    cin >> s;
    for(char ch : s) {
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' || ch == 'A' ||
           ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    }
    cout << count;
    return 0;
}
