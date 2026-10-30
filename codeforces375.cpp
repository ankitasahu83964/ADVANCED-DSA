#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    for(char ch : s) {
        if(ch >= '0' && ch <= '9') count++;
    }
    cout << count;
    return 0;
}
