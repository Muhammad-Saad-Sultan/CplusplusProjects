/*************************************************************************************/
/*
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number: " << endl;
    cin >> n ;

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            cout << "This is a Prime Number." << endl;
        }

        else
        {
            cout << "This is not a Prime Number." << endl;
        }
    }

return 0;
}
*/
/*************************************************************************************/
/**/
#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) 
    {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    int divisors = 0;
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            divisors++;
            break;
        }
    }

    if (divisors == 0) 
    {
        cout << num << " is a prime number." << endl;
    } 
    
    else 
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

