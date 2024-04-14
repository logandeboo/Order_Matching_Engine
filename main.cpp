#include <iostream>
#include <string>

enum class OrderType
{
    BUY,
    SELL
};

class Order
{

    // Public and private are access specifiers used to control the visibility of class members
    // (variables and functions) within a class. Private members are accessible only within the same class.
    // This ensures that the internal state of the class cannot be modified from the outside and hides
    // implementation details. Public members are accessible from anywhere in the program. Public memebrs define
    // the interface to the class providing methods for interacting with its objects.
private:
    std::string orderId;
    long timestamp;
    OrderType type;
    double price;
    int quantity;

public:
};

int main()
{

    std::cout << "Please enter you name: ";

    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << std::endl;
    return 0;
}