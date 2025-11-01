#include <iostream>
using namespace std;

void ascending(int n)
{
    for(int i = 0; i <= 9; i++)
    {
        int temp = n;

        while(temp > 0)
        {
            int digit = temp % 10;

            if(digit == i)
                cout << digit;

            temp = temp / 10;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    ascending(n);

    return 0;
}
