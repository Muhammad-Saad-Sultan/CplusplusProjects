#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the size of the pyramid: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num; j++)
        {
            if( j >= i)
            {
                cout << i << " ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

return 0;
}