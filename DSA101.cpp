#include <iostream>
using namespace std;

int smallestDigit(int n)
{
    int smallest = 9;

    while(n > 0)
    {
        int digit = n % 10;

        if(digit < smallest)
            smallest = digit;

        n = n / 10;
    }

    return smallest;
}

int main()
{
    int n;
    cin >> n;

    cout << "Smallest digit = " << smallestDigit(n);

    return 0;
}
