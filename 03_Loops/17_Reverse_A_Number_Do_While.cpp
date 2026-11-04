#include <iostream>
using namespace std;

int main()
{
    int n, remainder, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    do
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;

    } while (n != 0);

    cout << "Reverse number = " << reverse;

    return 0;
}
