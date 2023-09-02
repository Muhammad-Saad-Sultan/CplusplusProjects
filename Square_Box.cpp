#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the size of the square box: ";
    cin >> num;

    cout << endl;

    for (int i=1; i <= num; i++)
    {
        cout << "\t";

        for (int j=1; j <= num; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }

return 0;
}