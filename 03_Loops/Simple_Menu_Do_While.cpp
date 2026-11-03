#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    do
    {
        cout << "\n----- SIMPLE CALCULATOR -----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> a;

            cout << "Enter second number: ";
            cin >> b;
        }

        switch (choice)
        {
            case 1:
                cout << "Addition = " << a + b << endl;
                break;

            case 2:
                cout << "Subtraction = " << a - b << endl;
                break;

            case 3:
                cout << "Multiplication = " << a * b << endl;
                break;

            case 4:
                if (b != 0)
                    cout << "Division = " << a / b << endl;
                else
                    cout << "Division by zero is not possible!" << endl;
                break;

            case 5:
                cout << "Calculator Exited." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
