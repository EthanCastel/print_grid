#include <iostream>
#include <print>

int main()
{
    // Your Fleet
    std::println("Your Fleet");

    std::cout << "0 ";
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i;
        if (i < 10) std::cout << " ";
    }
    std::cout << '\n';

    for (char row = 'A'; row <= 'J'; ++row)
    {
        std::cout << row << '\n';
    }

    std::cout << '\n';

    // Enemy Waters
    std::println("Enemy Waters");

    std::cout << "0 ";
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i;
        if (i < 10) std::cout << " ";
    }
    std::cout << '\n';

    for (char row = 'A'; row <= 'J'; ++row)
    {
        std::cout << row << '\n';
    }

    return 0;
}
