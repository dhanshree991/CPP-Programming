#include <iostream>
using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = a;
    result += b;
    cout << "Addition = " << result << endl;

    result = a;
    result -= b;
    cout << "Subtraction = " << result << endl;

    result = a;
    result *= b;
    cout << "Multiplication = " << result << endl;

    result = a;
    if (b != 0)
    {
        result /= b;
        cout << "Division = " << result << endl;

        result = a;
        result %= b;
        cout << "Modulus = " << result << endl;
    }

    return 0;
}
