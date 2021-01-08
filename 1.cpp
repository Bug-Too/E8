#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double sum = 0;
    for (double i = 2; i <= 2; i = i + 2)
    {
        sum = sum + (1.0 / i);
    }
    cout << std::setprecision(5);
    cout << std::fixed;
    cout << sum;
}
