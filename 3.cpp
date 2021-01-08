#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int num, min;
    cout << "Input number: ";
    cin >> num;
    cin.ignore();
    min = num;
    if (num > 0)
    {
        while (num > 0)
        {
            cout << "Input number: ";
            cin >> num;
            if (num < min && num > 0)
            {
                min = num;
            }
        }
        cout << "Minimum = " << min;
    }
    else
    {
        cout << "N/A";
    }
}
