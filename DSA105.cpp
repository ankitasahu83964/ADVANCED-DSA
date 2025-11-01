#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void strong(int n)
{
    int temp = n, sum = 0;

    while(n > 0)
    {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }

    if(sum == temp)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";
}

int main()
{
    int n;
    cin >> n;

    strong(n);

    return 0;
}
