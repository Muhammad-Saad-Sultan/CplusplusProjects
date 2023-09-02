/************************************************** My Own Solution **************************************************/

/*
#include <iostream>
using namespace std;
int main()
{
    int num;
    int num1 = 1;
    
    cout << "Enter a number to find its factorial: " << endl;
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        num1 = num1 * i;
    }

    cout << "The Factorial of " << num << " is: " << num1 << endl;

return 0;
}
*/

/************************************************** Recursive Solution **************************************************/

/*
// C++ program to find factorial
// of given number
#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}
*/

/************************************************** For Loop **************************************************/

/*
// C++ program for factorial
// of a number
#include <iostream>
using namespace std;
 
// Function to find factorial of
// given number
unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 
// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}
*/

/************************************************** While Loop **************************************************/

/*
// C++ program for factorial
// of a number
#include <iostream>
using namespace std;
 
// Function to find factorial of given
// number using while loop
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}
 
// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is "
         << factorial(num) << endl;
    return 0;
}
*/

/************************************************** Ternary Operator **************************************************/

/*
// C++ program to find factorial
// of given number
#include <iostream>
using namespace std;
 
int factorial(int n)
{
    // Single line to find factorial
    return ((n == 1 || n == 0) ? 1 :
             n * factorial(n - 1));
}
 
// Driver Code
int main()
{
    int num = 5;
    cout << "Factorial of " <<
             num << " is "<<
             factorial(num);
    return 0;
}
*/

/************************************************** Call By Reference **************************************************/

/*
// C++ program to find the factorial
// of a given number using call
// by reference method
#include<iostream>
using namespace std;
 
// Function to find factorial
void factorial(int n, int *f)
{
    int i;
    for(i = n; i >= 1; i--)
        *f = (*f) * i;
}
 
// Driver code
int main()
{
    int num = 5, fact = 1;
   
    factorial(num, &fact);
    cout << "Factorial of " <<
             num << " is "<<
             fact;
    return 0;
}
*/

/****************************************************************************************************/