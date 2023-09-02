#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter an alphabetic character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "The alphabetic character " << ch << " is 'Vowel'." << endl;
    }
    
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "The alphabetic character " << ch << " is 'Vowel'." << endl;
    }

    else
    {
        cout << "The alphabetic character " << ch << " is 'Consonant'." << endl;
    }

return 0;
}