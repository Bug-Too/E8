#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; true; i++)
    {

        if (i * 3 <= 333)
        {
            if (i % 2 == 0)
            {
                sum = sum + pow(3 * i, 3);
            }
            else
            {
                sum = sum + pow(3 * i, 2);
            }
        }
        else
        {
            break;
        }
    }
    cout << sum;
}
