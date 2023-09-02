#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float amount;
    float rate;
    float time;
    float result;
    float CI;
    float total;

    cout << "Enter amount to calculate its compound interest" << endl;

    cout << endl;

    cout << "Enter Amount: ";
    cin >> amount;

    cout << endl;
    
    cout << "Enter Time: ";
    cin >> time;

    cout << endl;
    
    cout << "Enter Rate: ";
    cin >> rate;

    cout << endl;

    result= amount * ((pow((1 + rate / 100) , time)));
    CI = result - amount;
    cout << "The compound interest on this amount is: " << CI << endl;

    cout << endl;
    
    total = result + CI;
    cout << "Your total amount to be paid is: " << total << endl;

return 0;
}