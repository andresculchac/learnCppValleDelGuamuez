#include <iostream>
// This program demonstrates a for statement with a shortcut syntax.
int main()
{
    int i{0};
    for (; i <= 50;){
        std::cout << i << '\n';
        ++i;
    }
}