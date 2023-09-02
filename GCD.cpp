/************************************************************************************************************/

/*
#include <iostream>
using namespace std;
int main()
{
    int value1;
    int value2;
    int result = min(value1 , value2);

    cout << "Enter first value: ";
    cin >> value1;

    cout << endl;

    cout << "Enter second value: ";
    cin >> value2;

    cout << endl;

    if (value1 == 0)
    {
        cout << "GCD of " << value1 << " and " << value2 << " is: " << value2 << endl;
    }
    
    else if (value2 == 0)
    {
        cout << "GCD of " << value1 << " and " << value2 << " is: " << value1 << endl;
    }

    else if (value1 == value2)
    {
        cout << "GCD of " << value1 << " and " << value2 << " is: " << value1 << endl;
    }
    
    else
    {
        while ( result > 0)
        {
            if (value1 % result == 0 && value2 % result == 0)
            {
                break;
            }
            result--;
        }
        
        cout << "GCD of " << value1 << " and " << value2 << " is: " << result << endl; 
    }


return 0;
}
*/

/************************************************************************************************************/

/*
#include <iostream>
using namespace std;
  
// Function to return gcd of a and b
int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
  
    // Return gcd of a and b
    return result;
}
  
// Driver code
int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);

return 0;
}
*/

/************************************************************************************************************/
