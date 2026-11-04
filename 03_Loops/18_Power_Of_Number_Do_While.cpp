#include <iostream>
using namespace std;

int main()
{
    int base, exponent, power = 1, i = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    do
    {
        power = power * base;
        i++;

    } while (i <= exponent);

    cout << "Power = " << power;

    return 0;
}
