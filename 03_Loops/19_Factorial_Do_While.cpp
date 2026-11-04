#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    do
    {
        factorial = factorial * i;
        i++;

    } while (i <= n);

    cout << "Factorial = " << factorial;

    return 0;
}
