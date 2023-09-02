/*************** Example_1 ***************/

/*
#include <iostream>
using namespace std;
int main()
{
    char c;

    cout << "Enter a character: ";
    cin >> c;

    cout << "ASCII Value of " << c << " is " << int(c) << endl;

return 0;
}
*/

/*************** Example_2 ***************/

/*
#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // Get a character input from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Display ASCII code of the entered character
    cout << "ASCII code of '" << ch << "' is: " << int(ch) << endl;

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') 
    {
        cout << "The character is an uppercase letter." << endl;
    }

    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z') 
    {
        cout << "The character is a lowercase letter." << endl;
    }

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') 
    {
        cout << "The character is a digit." << endl;
    }

    // Check if the character is a special character
    if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) 
    {
        cout << "The character is a special character." << endl;
    }

return 0;
}
*/

/*************** Example_3 ***************/


#include <iostream>
using namespace std;
int main()
{
    char ch;
    char lowercase;
    char uppercase;

    cout << "Enter an Alphabet character: " << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        lowercase = ch + 32;
        cout << "Lowercase of " << ch << " is: " << lowercase << endl;
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        uppercase = ch - 32;
        cout << "Uppercase of " << ch << " is: " << uppercase << endl;
    }

    else
    {
        cout << "'" << ch << "'" << "is not alphabetic character." << endl ;
    }

return 0;
}
