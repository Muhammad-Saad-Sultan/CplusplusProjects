#include <iostream>
using namespace std;
int main()
{
    char ch;
    float num1;
    float num2;
    float result;

    cout << "Enter your choice (+, -, *, /): ";
    cin >> ch;

    cout << endl;
    
    if (ch == '+')
    {
        cout << "Enter two numbers to add them: " << endl;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        result = num1 + num2;

        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;

    }
    
    else if (ch == '-')
    {
        cout << "Enter two numbers to subtract them: " << endl;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        result = num1 - num2;

        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;

    }
    
    else if (ch == '*')
    {
        cout << "Enter two numbers to multiply them: " << endl;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        result = num1 * num2;

        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;

    }
    
    else if (ch == '/')
    {
        cout << "Enter two numbers to divide them: " << endl;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        result = num1 / num2;

        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;

    }
    
    else
    {
        cout << "\nInvalid choice!\n";
    }

return 0;
}