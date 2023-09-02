#include <iostream>
using namespace std;
int main()
{
    char ch;
    float value;
    float result;

    cout << "1. Press 'F/f' to convert from Fahrenheit to Celsius." << endl;
    cout << "2. Press 'C/c' to convert from Celsius to Fahrenheit." << endl;

    cout << endl;
    
    cout << "Enter your Choice: " << endl;
    cin >> ch;
    
    cout << endl;

    if (ch == 'f' || ch == 'F')
    {
        cout << "Enter any value in Fahrenheit: " << endl;
        cin >> value;

        result = (value - 32) * 5/9;

        cout << "'" << value << "'" << " degree Fahrenheit is equal to " << "'" << result << "'" << " degree Celsius." << endl;
    }
    
    else if (ch == 'c' || ch == 'C')
    {
        cout << "Enter any value in Celsius: " << endl;
        cin >> value;

        result = (9/5 * value) + 32;

        cout << "'" << value << "'" << " degree Celsius is equal to " << "'" << result << "'" << " degree Fahrenheit." << endl;
    }

    else
    {
        cout << "Enter a valid value!" << endl;
    }

return 0;
}