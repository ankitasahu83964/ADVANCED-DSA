#include <iostream>
using namespace std;

bool perfectSquare(int n)
{
    if(n < 0)
        return false;

    for(int i = 0; i * i <= n; i++)
    {
        if(i * i == n)
            return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    if(perfectSquare(n))
        cout << "Perfect Square";
    else
        cout << "Not Perfect Square";

    return 0;
}
