#include <iostream>
using namespace std;

int main() {

    int binary=1011;

    int decimal = 0;
    int power = 1;

    while (binary > 0) {
        int bit = binary % 10;

        decimal = decimal + bit * power;

        power = power * 2;
        binary = binary / 10;
    }

    cout << decimal;

    return 0;
}