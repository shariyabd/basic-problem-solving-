#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter your year : " << endl;
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "Entered Year Is Leap Year " << endl;
        }
        else
        {
            cout << "Entered Year Is not Leap Year " << endl;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            cout << "Entered Year Is Leap Year " << endl;
        }
        else
        {
            cout << "Entered Year Is not Leap Year " << endl;
        }
    }
}