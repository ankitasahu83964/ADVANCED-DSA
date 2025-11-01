#include <iostream>
using namespace std;

void automorphic(int n)
{
    int square = n * n;
    int temp = n;
    int divisor = 1;

    while(temp > 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if(square % divisor == n)
        cout << "Automorphic Number";
    else
        cout << "Not Automorphic Number";
}

int main()
{
    int n;
    cin >> n;

    automorphic(n);

    return 0;
}
