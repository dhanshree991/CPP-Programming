#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Bitwise AND = " << (a & b) << endl;
    cout << "Bitwise OR = " << (a | b) << endl;
    cout << "Bitwise XOR = " << (a ^ b) << endl;
    cout << "Left Shift = " << (a << 1) << endl;
    cout << "Right Shift = " << (a >> 1) << endl;

    return 0;
}
