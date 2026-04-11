#include <iostream>
#include <string>

int main()
{
    // i wanna write a custom names
    std::cout << "Enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // note: no std::ws here
  
    std::cout << name << " has " << name.length() << " characters.\n";
    std::cin.get();
    return 0;

}