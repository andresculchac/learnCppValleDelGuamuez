//author: MOMPYLABS april 17 2026
#include <iostream>
using namespace std;
#include <cstdlib>

int main()
{
    cout << "Do you want to know how much number has your digit?\n";
    cout << "Enter a number: ";
    int number{};
    cin >> number;
    int counter{0};
    if (number == 0){
        counter = 1;
    }
    while (number != 0){
        number = abs(number / 10);
        counter += 1;
    }
    
    cout << "The number has: " << counter << " digits";
    

}



