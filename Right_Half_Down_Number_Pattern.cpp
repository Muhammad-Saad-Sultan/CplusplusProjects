#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the size of the pyramid: ";
    cin >> num;

    for (int i=1; i <= num; i++)
    {
        for (int j=num; j >= i; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

return 0;
}
