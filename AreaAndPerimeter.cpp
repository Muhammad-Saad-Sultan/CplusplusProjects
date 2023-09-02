#include <iostream>
using namespace std;
int main()
{
    float breadth;
    float length;
    float area;
    float perimeter;
    
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    
    cout << "Enter the breadth of the rectangle: " << endl;
    cin >> breadth;    

    area = length * breadth;
    cout << "The area of the rectangle is: " << area << endl;

    perimeter = 2 * (length + breadth);
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

return 0;
}