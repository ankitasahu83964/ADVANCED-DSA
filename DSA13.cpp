#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    set<int> s;

    int x;

    for(int i = 0; i < n1; i++) {
        cin >> x;
        s.insert(x);
    }

    for(int i = 0; i < n2; i++) {
        cin >> x;
        s.insert(x);
    }

    for(auto it : s)
        cout << it << " ";

    return 0;
}
