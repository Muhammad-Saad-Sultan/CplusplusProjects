#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;

    cout << "Enter first number: " ;
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Prime Numbers between " << num1 << " and " << num2 << " are: " << endl;

    for (int i = num1; i <= num2; i++)
    {
        if (i == 0 || i == 1)
        {
            continue;
        }

        int flag = 1;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << i << " ";
        }
    }

return 0;
}