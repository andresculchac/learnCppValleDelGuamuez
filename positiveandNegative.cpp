#include <iostream>
using namespace std;

int main()
{
    int number{};
    cin >> number;
    //variables for algorithm
    int positiveNumbers {0};
    int negativeNumbers {0};

    for (int i = 0; i < number; i++){
        int askNumber{};
        cin >> askNumber;
        if (askNumber > 0){
            positiveNumbers += askNumber;
        }
        else if (askNumber < 0){
            negativeNumbers += askNumber;
        }
    } 
    cout << "positivos " << positiveNumbers <<", " <<"negativos " << negativeNumbers<<'\n'; 
}