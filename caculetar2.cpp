// Calculetwr using class

#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
public:
    void mainmenu()
    {
        while (true)
        {
            int choice;

            cout << "Calculator Menu:\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "5. Square Root\n";
            cout << "6. Square\n";
            cout << "7. Power\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                squareRoot();
                break;
            case 6:
                square();
                break;
            case 7:
                power();
                break;
            case 0:
                cout << "Exiting the calculator. Goodbye!\n";
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }

private:
    void addition()
    {
        double a, b;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a << " + " << b << " = " << a + b << endl;
    }

    void subtraction()
    {
        double a, b;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a << " - " << b << " = " << a - b << endl;
    }

    void multiplication()
    {
        double a, b;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a << " * " << b << " = " << a * b << endl;
    }

    void division()
    {
        double a, b;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        if (b != 0)
        {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        else
        {
            cout << "Division by zero is not allowed.\n";
        }
    }

    void squareRoot()
    {
        double a;
        cout << "Enter a number: ";
        cin >> a;
        if (a >= 0)
        {
            cout << "Square root of " << a << " is " << sqrt(a) << endl;
        }
        else
        {
            cout << "Invalid input. Square root of a negative number is undefined.\n";
        }
    }

    void square()
    {
        double a;
        cout << "Enter a number: ";
        cin >> a;
        cout << a << " squared is " << a * a << endl;
    }

    void power()
    {
        double base;
        int exponent;
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the exponent: ";
        cin >> exponent;
        double result = 1.0;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
        cout << base << " ^ " << exponent << " = " << result << endl;
    }
};

int main()
{
    Calculator c;
    c.mainmenu();

    return 0;
}
