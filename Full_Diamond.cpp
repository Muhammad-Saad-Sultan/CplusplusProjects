#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the size of diamond: ";
    cin >> num;

    for(int i=1; i <= num; i++)
    {
        for(int j=num; j >= 1; j--)
        {
            if (i <= j)
            {
                cout << " ";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= num; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for(int i=1; i <= num; i++)
    {
        
        for(int j=1; j <= num; j++)
        {
            if (j <= i)
            {
                cout << " ";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;

    }

return 0;
}



////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////                                                    ////
////    #include <iostream>                             ////
////    using namespace std;                            ////
////    int main()                                      ////
////    {                                               ////
////        int num;                                    ////
////                                                    ////
////        cout << "Enter the size of diamond: ";      ////
////        cin >> num;                                 ////
////                                                    ////
////        for(int i=num; i >= 1; i--)                 ////
////        {                                           ////
////            for(int j=num; j >= i; j--)             ////
////            {                                       ////
////                if (j > i)                          ////
////                {                                   ////
////                    cout << " ";                    ////
////                }                                   ////
////                                                    ////
////                else                                ////
////                {                                   ////
////                    cout << "* ";                   ////
////                }                                   ////
////            }                                       ////
////            cout << endl;                           ////
////        }                                           ////
////                                                    ////
////    return 0;                                       ////
////    }                                               ////
////                                                    ////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////


/*

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the size of diamond: ";
    cin >> num;

    for(int i=num; i >= 1; i--)
    {
        for(int j=1; j <= num; j++)
        {
            if (i < j)
            {
                cout << " ";
            }

            else if( j < i)
            {
                cout << " ";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

return 0;
}

*/

