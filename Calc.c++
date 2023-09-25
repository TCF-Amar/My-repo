#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void dv(float a, float b);
void sqroot(double a);
void squ(double a);
void powr(double a);
int main()
{
yaha:
    double num1, num2;
    int choice;

    cout << "1. Add\n";
    cout << "2. Subtraction\n";
    cout << "3. mutiplication\n";
    cout << "4. Divition\n";
    cout << "5. SQROOT\n";
    cout << "6. Squer \n";
    cout << "7. Power\n";
    cout << "0. Exit\n";
    cout << "Enter Yout CHoice : ";
    cin >> choice;

    if (choice <= 7)
    {
        switch (choice)
        {
        case 1:
            add(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            mul(num1, num2);
            break;
        case 4:
            dv(num1, num2);
            break;
        case 5:
            sqroot(num1);
            break;
        case 6:
            squ(num1);
            break;
        case 7:
            powr(num1);
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\tInvalid choice ";
            break;
        }
        // cout << "\n***---Press any buttun to continu---***\n";
        cout << "\nyou Want to Prform Anothor Opretion Yes(Y/y)/ No(N/n) : ";
        char input;

        cin >> input;
        if (input == 'Y' || input == 'y')
        {

            goto yaha;
        }
        else
        {

            exit(0);
        }
        getch();
    }
    else
    {
        cout << "\n\n\n\tInvalid choice\n";
        cout << "\tEnter Valid chodce \n\n";
        goto yaha;
    }
}

void add(int a, int b)
{
    cout << "\nEnter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
}
void sub(int a, int b)
{
    cout << "\nEnter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << a << " - " << b << " = " << a - b << endl;
}
void mul(int a, int b)
{
    cout << "\nEnter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << a << " * " << b << " = " << a * b << endl;
}
void dv(float a, float b)
{
    cout << "\nEnter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << a << " / " << b << " = " << a / b << endl;
}
void sqroot(double a)
{
    cout << "Enter Your Number : ";
    cin >> a;
    if (a != 1)
    {
        cout << a << "'s Squr root is : " << sqrt(a) << endl;
    }
    else
        cout << a << " Squr root is : " << sqrt(a) << endl;
}
void squ(double a)
{
    cout << "Enter Your Number : ";
    cin >> a;
    cout << a << "'s Suquer is : " << a * a << endl;
}
void powr(double a)
{
    int pw, tot = 1;
    cout << "Enter Yout Number : ";
    cin >> a;
    cout << "Enter Power :";
    cin >> pw;
    for (int i = 0; i < pw; i++)
    {
        tot = tot * a;
    }
    cout << a << "^" << pw << " is : " << tot << endl;
}