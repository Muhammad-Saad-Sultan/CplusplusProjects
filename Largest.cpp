#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;
    
    cout << "Enter 3rd number: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The greatest number of all is: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The greatest number of all is: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "The greatest number of all is: " << c << endl;
    }
    else
    {
        cout << "All the numbers are equal." << endl;
    }

return 0;
}