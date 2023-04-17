/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    unsigned int num, i;

    cout << "enter a positive whole number in the range 2 through 1000 :";
    cin >> num;

    int count = 0;
    for(i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count ++;
        }
    }
    if (count == 2)
    {
        cout << num << " is prime." << endl;
    }
    else 
    {
        cout << num << " is divisible by:" << endl;
        if (num % 2 == 0)
        {
            cout << "2" << endl;
        }
        if (num % 3 == 0)
        {
            cout << "3" << endl;
        }
        if (num % 5 == 0)
        {
            cout << "5" << endl;
        }
        if (num % 7 == 0)
        {
            cout << "7" << endl;
        }
        if (num % 11 == 0)
        {
            cout << "11" << endl;
        }
        if (num % 13 == 0)
        {
            cout << "13" << endl;
        }
        if (num % 17 == 0)
        {
            cout << "17" << endl;
        }
        if (num % 19 == 0)
        {
            cout << "19" << endl;
        }
        if (num % 23 == 0)
        {
            cout << "23" << endl;
        }
        if (num % 29 == 0)
        {
            cout << "29" << endl;
        }
        if (num % 31 == 0)
        {
            cout << "31" << endl;
        }
    }

    return 0;
}

