#include <iostream>
#include <string>

enum class OrderType
{
    BUY,
    SELL
};

int main()
{

    int x = 4;

    int *y = &x;

    // std::cout << "The value of x is " << x << std::endl;
    // std::cout << "The value of y is " << y << std::endl;
    // std::cout << "The value of &y is " << &y << std::endl;
    // std::cout << "The value of *y is " << *y << std::endl;

    // std::cout << "BUY: " << OrderType::BUY << "and SELL: " << OrderType::SELL << std::endl;

    std::cout << "BUY: " << "and SELL: " << std::endl;

    return 0;
}