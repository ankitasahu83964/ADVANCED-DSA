#include <iostream>
using namespace std;

int lastDigit(int n)
{
    return n % 10;
}

int main()
{
    int n;
    cin >> n;

    cout << "Last digit = " << lastDigit(n);

    return 0;
}
