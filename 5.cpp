#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void printPattern1(int a)
{
    if (a > 0)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i<j)
                {
                    cout << "X";
                }
                else
                {
                    cout << "O";
                }
                
                
            }
            cout <<  "\n";
            
        }
        
    }
    else
    {
        cout << "Invalid input";
    }
}

int main()
{
    printPattern1(7) ;
}
