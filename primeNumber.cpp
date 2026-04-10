// Author: MompyLabs DateToday: april 10 2026
// Prime numbers within 0 through 9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter a number between 0 and 9\n";
    int x {};
    cin>>x;
    if (x == 2 || x == 3 || x==5 || x == 7)
    {
        cout << "The digit is prime\n";
    }
    else
    {
        cout << "The digit is not prime\n";
    }

    return 0;
}