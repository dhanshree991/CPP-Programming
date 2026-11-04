#include <iostream>
using namespace std;

int main()
{
    int n, original, remainder, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    do
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;

    } while (n != 0);

    if (sum == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}
