#include <iostream>
using namespace std;
int main()
{
    int num;
    int n = 1;
    int num1 = 0;

    cout << "Enter the size of the pyramid: ";
    cin >> num;

    int fac = num;
    while(fac > 0)
    {
        num1 = num1 + fac;
        fac--;
    }

    for (int i=num; i >= 1; i--)
    {
        for (int j=1; j <= i; j++)
        {
            cout << num1-- << " ";
        }
        cout << endl;
    }

return 0;
}