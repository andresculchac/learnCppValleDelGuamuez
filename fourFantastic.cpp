#include <iostream>
using namespace std;

int main()
{
    int isprime{};
    cin >> isprime;
    if (isprime > 7) {
        if (isprime % 2 == 0){
            cout << "es multiplo de 2";
            return 0;
        }
        if (isprime % 3 == 0){
            cout << "es multiplo de 3";
            return 0;
        }
        if (isprime % 5 == 0){
            cout << "es multiplo de 5";
            return 0;
        }   
        if (isprime % 7 == 0){
            cout << "es multiplo de 7";
            return 0;
        }
        else {
            cout << "no es multiplo de ninguno de los primeros cuatro primos";
        }
    }
    //cout << "nunca se imprime aqui, deberia dejarlo?"; se imprime si es menor que 7
}