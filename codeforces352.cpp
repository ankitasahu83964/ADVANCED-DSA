#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "Equal";
    else if(a > b) cout << "First";
    else cout << "Second";
    return 0;
}
