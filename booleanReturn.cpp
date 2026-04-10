#include <iostream>
using namespace std;

bool isEqual(int x, int y)
{
    return x == y;
}

int main()
{
    cout << "Enter an integer: ";
    int x {};
    cin >> x;

    cout << "Enter another integer: ";
    int y {};
    cin >> y;

    cout << boolalpha; // print bool values as true or false instead of 1 or 0

    cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x, y);
    cout << '\n';
    return 0;
    
}