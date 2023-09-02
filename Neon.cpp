#include <iostream>
using namespace std;
int main()
{
    int num;
    int square;
    int digit;

    cout << "Enter a number: " << endl;
    cin >> num;

    square = num * num;
    cout << "Square of " << num << " is: " << square << endl;

    int sum = 0;

    while (square > 0)
    {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if (sum == num)
    {
        cout << "This is a Neon Number." << endl;
    }

    else
    {
        cout << "This is not a Neon Number." << endl;
    }

return 0;
}