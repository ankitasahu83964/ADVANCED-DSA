#include <iostream>
using namespace std;

void swapNum(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    swapNum(a, b);

    cout << a << " " << b;
    return 0;
}
