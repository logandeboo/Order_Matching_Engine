#include "../Include/Order.h"
#include "../Include/ExchangeSettings.h"
#include "../Include/MarketParticipant.h"
#include <iostream>
#include <string>

#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>

int main()
{

    MarketParticipant m1;

    for (const auto &pair : m1.get_holdings())
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Create an Order object
    // Order buyOrder("MSFT", "BUY", 123.98, 199);
    // Order buyOrder1("MSFT", "BUY", 123.98, 199);

    // Debug output to verify the orderId
    // std::cout << "Order ID: " << buyOrder.get_order_id() << std::endl;
    // std::cout << "Timestamp: " << buyOrder.get_timestamp() << std::endl;
    // std::cout << "Asset Name: " << buyOrder.get_asset_name() << std::endl;
    // std::cout << "Order Type: " << buyOrder.get_order_type() << std::endl;
    // std::cout << "Price: " << buyOrder.get_price() << std::endl;
    // std::cout << "Quantity: " << buyOrder.get_quantity() << std::endl;

    std::cout << "______________________________________________" << std::endl;
    // Create an Order object
    // Order sellOrder("TSLA", "SELL", 1231.42, 1);
    // Order sellOrder2("TSLA", "SELL", 1231.42, 1);

    // Debug output to verify the orderId
    // std::cout << "Order ID: " << sellOrder.get_order_id() << std::endl;
    // std::cout << "Timestamp: " << sellOrder.get_timestamp() << std::endl;
    // std::cout << "Asset Name: " << sellOrder.get_asset_name() << std::endl;
    // std::cout << "Order Type: " << sellOrder.get_order_type() << std::endl;
    // std::cout << "Price: " << sellOrder.get_price() << std::endl;
    // std::cout << "Quantity: " << sellOrder.get_quantity() << std::endl;

    return 0;
}

// run command: g++ -std=c++20 main.cpp Order.cpp ExchangeSettings.cpp Market_Participant.cpp -o main && ./main