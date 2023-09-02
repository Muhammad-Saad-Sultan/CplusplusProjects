#include <iostream>
using namespace std;
int main()
{
    float amount;
    float time;
    float rate;
    float result;
    float total;

    cout << "Enter an amount to find its simple interest according to time and rate." << endl;
    
    cout << endl;

    cout << "Enter Amount: ";
    cin >> amount;
    
    cout << endl;

    cout << "Enter Rate: ";
    cin >> rate;
    
    cout << endl;

    cout << "Enter Time: ";
    cin >> time;
    
    cout << endl;

    result = (amount * rate * time) / 100;
    cout << "Simple interest on this amount is: " << result << endl;

    cout << endl;
    
    total = result + amount;
    cout << "Your Total amount to be paid is: " << total << endl;

return 0;
}