#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(int n)
{
    return sqrt(n);
}

int main()
{
    int n;
    cin >> n;

    if(n >= 0)
        cout << squareRoot(n);
    else
        cout << "Invalid Number";

    return 0;
}
