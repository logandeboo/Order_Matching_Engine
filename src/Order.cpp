#include "../Include/Order.h"
#include <iostream>
#include <string>
#include <set>
#include <random>
#include <ctime>
#include <chrono>

std::set<int> Order::pastIds;

Order::Order(std::string assetName, std::string orderType, double price, int qty)
    : assetName(assetName), orderType(orderType), price(price), quantity(qty)
{
    orderId = generate_unique_order_id();
    timestamp = generate_timestamp();
}

// TEST THIS FUNCTION
int Order::generate_unique_order_id()
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 1000000);
    int possible_unique_id;

    do
    {
        int possible_unique_id = dist(rd);

    } while (pastIds.find(possible_unique_id) != pastIds.end());

    pastIds.insert(possible_unique_id);

    // for (int num : pastIds)
    // {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;

    return possible_unique_id;
}

int64_t Order::generate_timestamp()
{
    using namespace std::chrono;
    int64_t timestamp = std::chrono::duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    std::cout << "Timestamp generatred: " << timestamp << std::endl;

    return timestamp;
}

// Getters
int Order::get_order_id() const
{
    return orderId;
}

std::string Order::get_timestamp() const
{
    return timestamp;
}

std::string Order::get_asset_name() const
{
    return assetName;
}

std::string Order::get_order_type() const
{
    return orderType;
}

double Order::get_price() const
{
    return price;
}

int Order::get_quantity() const
{
    return quantity;
}