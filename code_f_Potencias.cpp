// author: MompyLabs 
// Date : april 19 2026

#include <iostream>
#include <cmath>
//power function pow(base, exponent) 2^3 = pow(2, 3) = 8
// multiplicar acumulativamente es mejor que recalcular desde cero

using namespace std;
int main()
{
    int askPower{};
    int limit{};
    cin >> askPower >> limit;
    int askLimit{0};
    //cout << pow(askPower,limit);
    int subPower {1};
    while (askLimit <= limit){
        int full = pow(askPower, subPower);
        if (full > limit) {
            break;
        }
        cout << full<<'\n';
        askLimit = full;
        subPower ++;
    }



}

/* #include <iostream>
using namespace std;

int main()
{
    int base{}, limit{};
    cin >> base >> limit;

    int value = base;

    while (value <= limit) {
        cout << value << '\n';
        value *= base;
    }
} */