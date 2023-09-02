#include <iostream>
using namespace std;
int main()
{
    int num;
    char n = 'A';

    cout << "Enter the size of the pyramid: ";
    cin >> num;

    for (int i=1; i <= num; i++)
    {
        for (int j=1; j <= i; j++)
        {
            cout << n << " ";
        }
        cout << endl;
        n++;
    }

return 0;
}