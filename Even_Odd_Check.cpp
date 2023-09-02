#include <iostream>
using namespace std;
int main()
{
    int value;

    cout << "Enter a value to check wheter it is (even/odd): " << endl;
    cin >> value;

    if (value % 2 == 0)
    {
        cout << "This value is 'Even'." << endl;
    }

    else
    {
        cout << "This value is Odd." << endl;
    }

return 0;
}