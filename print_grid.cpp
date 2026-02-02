#include <iostream>
#include <print>

int main()
{
    // Your Fleet
    std::println(std::cout, "Your Fleet");

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
    std::println(std::cout, "Enemy Waters");

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
