#include <iostream>
//author: MompyLabs

int main ()
{
    int number{};
    //how to create an array of the first four prime numbers 
    int arr[] = {2, 3, 5, 7};
    std::cin >> number;
    if (number > 7) {
        for (int i = 0; i < 4; ++i) {
            if (number % arr[i] == 0) {
                std::cout << "es multiplo de " << arr[i];
                return 0;
            }
        }
        std::cout << "no es multiplo de ninguno de los primeros cuatro primos";
    }

}