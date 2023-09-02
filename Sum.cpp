#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "This program sum all the natural numbers till you want." << endl;

    cout << endl;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = num-1; i >= 0; i--)
    {
        num = num + i;
    }

    cout << "Result: " << num << endl;

return 0;
}