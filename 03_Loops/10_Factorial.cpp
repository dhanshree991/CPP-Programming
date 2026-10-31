#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }

    cout << "Factorial = " << factorial;

    return 0;
}
