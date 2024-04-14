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
    std::string timestamp;
    std::string assetName;
    OrderType orderType;
    double price;
    int quantity;

public:
    Order(std::string orderId, std::string timestamp, std::string assetName, OrderType orderType, double price, int qty) : orderId(orderId), orderType(orderType), price(price), quantity(qty) {}

    // Getters
    std::string get_order_id() const
    {
        return orderId;
    }
    std::string get_timestamp() const
    {
        return timestamp;
    }

    std::string get_asset_name() const
    {
        return assetName;
    }

    OrderType get_order_type() const
    {
        return orderType;
    }

    double get_price() const
    {
        return price;
    }

    int get_quantity() const
    {
        return quantity;
    }
};

int main()
{

    Order buyOrder("af234b", "2024-04-12 10:30:00", "MSFT", OrderType::BUY, 123.98, 199);

    std::cout << buyOrder.get_order_id() << std::endl;
}