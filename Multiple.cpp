#include <iostream>
using namespace std;
int main()
{
    int num;
    int result;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "The multiplication table of " << num << " is: " << endl;

    cout << endl;
    
    for (int i=1; i <= 10; i++)
    {
        result = num * i;
        cout << "\t" << num << " x " << i << " = " << result << endl;
    }

return 0;
}