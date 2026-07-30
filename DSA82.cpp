#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

void armstrong(int n)
{
    int original = n, sum = 0;

    while(n != 0)
    {
        int digit = n % 10;
        sum = sum + cube(digit);
        n = n / 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
}

int main()
{
    int n;
    cin >> n;

    armstrong(n);

    return 0;
}
