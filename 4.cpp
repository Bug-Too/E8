#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void printPattern1(int a, int b)
{
    if (a > 0 && b > 0)
    {
        for (int i = 0; i < a; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < b; j++)
                {
                    if (j % 2 == 0)
                    {
                        cout << "O";
                    }
                    else
                    {
                        cout << "x";
                    }
                }
                cout << "\n";
            }
            else
            {
                for (int j = 0; j < b; j++)
                {
                    if (j % 2 == 0)
                    {
                        cout << "x";
                    }
                    else
                    {
                        cout << "O";
                    }
                }
                cout << "\n";
            }
        }
    }
    else
    {
        cout << "Invalid input";
    }
}

int main()
{
    printPattern1(7,-1) ;
}
