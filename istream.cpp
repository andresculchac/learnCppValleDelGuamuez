#include <iostream>
int main()
{
    std::string powerful{"Enter characters: "};
    std::cout << powerful;
    while (std::cin >> powerful)
        std::cout << powerful;

    return 0;
}