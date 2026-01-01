#include <iostream>
using namespace std;

int sumArray(int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int main()
{
    int a[5];

    for(int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Sum = " << sumArray(a, 5);

    return 0;
}
