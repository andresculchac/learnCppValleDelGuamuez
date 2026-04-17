#include <iostream>
using namespace std;
int main()
{
    //ask the user for a number
    cout << "Enter a number: ";
    int number{};
    cin >> number;
    int accumulator{0};
    //calculate the sum of numbers from 1 to the number entered by the user
    for (int i=1; i<=number; i++){
        if (i%2 == 0){
            accumulator += i; //even number, add to accumulator
        }
        
    }
    //display the result
    cout << "The sum of numbers from 1 to " << number << 
    " is: " << accumulator << endl;

}