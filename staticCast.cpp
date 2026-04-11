#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    print(static_cast<int>(5.5)); // explicityly convert double value
    return 0;
}
