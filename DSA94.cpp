#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int max = (a > b) ? a : b;

    while(true)
    {
        if(max % a == 0 && max % b == 0)
            return max;

        max++;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "LCM = " << lcm(a, b);

    return 0;
}
