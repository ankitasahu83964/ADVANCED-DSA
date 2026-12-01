#include <iostream>
using namespace std;

void check(int n)
{
    if(n % 3 == 0 && n % 5 == 0)
        cout << "Divisible by both 3 and 5";
    else
        cout << "Not divisible by both";
}

int main()
{
    int n;
    cin >> n;

    check(n);

    return 0;
}
