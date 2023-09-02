#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int max_num;
    int flag = 1;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    max_num = (num1 > num2) ? num1 : num2;

    while (flag)
    {
        if (max_num % num1 == 0 && max_num % num2 == 0)
        {
            cout << "LCM of " << num1 << " and " << num2 << " is: " << max_num << endl;
            break;
        }
        max_num++;
    }


return 0;
}