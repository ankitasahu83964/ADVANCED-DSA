#include <iostream>
using namespace std;

int oddDigitProduct(int n)
{
    int product = 1;
    bool found = false;

    while(n > 0)
    {
        int digit = n % 10;

        if(digit % 2 != 0)
        {
            product *= digit;
            found = true;
        }

        n /= 10;
    }

    if(!found)
        return 0;

    return product;
}

int main()
{
    int n;
    cin >> n;

    cout << "Odd Digit Product = " << oddDigitProduct(n);

    return 0;
}
