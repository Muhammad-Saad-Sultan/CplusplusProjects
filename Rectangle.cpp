#include <iostream>
using namespace std;

int main()
{
    int row;
    int col;
    
    cout << "Enter number of rows: ";
    cin >> row;
    
    cout << "Enter number of columns: ";
    cin >> col;

    cout << endl;
    
    for (int i=1; i <= row; i++)
    {
        cout << "\t";

        for (int j=1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;

    }

return 0;
}