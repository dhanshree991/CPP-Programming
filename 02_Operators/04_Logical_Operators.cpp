#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "AND (&&) = " << (a > 0 && b > 0) << endl;
    cout << "OR (||) = " << (a > 0 || b > 0) << endl;
    cout << "NOT (!) = " << !(a > 0) << endl;

    return 0;
}
