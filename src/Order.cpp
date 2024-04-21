#include "../Include/order.h"
#include <iostream>
#include <string>
#include <set>
#include <random>
#include <ctime>
#include <chrono>

std::set<int> order::pastIds;

order::order(std::string assetName, std::string orderType, double price, int qty)
    : assetName(assetName), orderType(orderType), price(price), quantity(qty)
{
    orderId = generate_unique_order_id();
    timestamp = generate_timestamp();
}

// TEST THIS FUNCTION
int order::generate_unique_order_id()
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1, 1000000);
    int possible_unique_id;

    do
    {
        possible_unique_id = dist(rd);

    } while (pastIds.find(possible_unique_id) != pastIds.end());

    pastIds.insert(possible_unique_id);

    // for (int num : pastIds)
    // {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;

    return possible_unique_id;
}

int64_t order::generate_timestamp()
{
    using namespace std::chrono;
    int64_t timestamp = std::chrono::duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    std::cout << "Timestamp generatred: " << timestamp << std::endl;

    return timestamp;
}

// Getters
int order::get_order_id() const
{
    return orderId;
}

std::string order::get_timestamp() const
{
    return timestamp;
}

std::string order::get_asset_name() const
{
    return assetName;
}

std::string order::get_order_type() const
{
    return orderType;
}

double order::get_price() const
{
    return price;
}

int order::get_quantity() const
{
    return quantity;
}