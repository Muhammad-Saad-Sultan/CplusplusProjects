#include <iostream>
using namespace std;
int main()
{
    int value1;
    int value2;
    int temp;

    cout << "Enter two numbers: " << endl;
    cin >> value1 >> value2;

    temp = value1;
    value1 = value2;
    value2 = temp;

    cout << "After Swapping both numbers: " << value1 << " " << value2; 
return 0;
}