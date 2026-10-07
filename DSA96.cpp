#include <iostream>
using namespace std;

int countPositive(int a[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
            count++;
    }

    return count;
}

int main()
{
    int a[5];

    for(int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Positive numbers = " << countPositive(a, 5);

    return 0;
}
