#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <set>

class Order
{
private:
    // Variables
    int orderId;
    std::string timestamp;
    std::string assetName;
    std::string orderType;
    double price;
    int quantity;

    // Tracks previously generated order_ids
    static std::set<int> pastIds;

    // Functions
    int generate_unique_order_id();
    int64_t generate_timestamp();

public:
    Order(std::string assetName, std::string orderType, double price, int qty);

    // Getters
    int get_order_id() const;
    std::string get_timestamp() const;
    std::string get_asset_name() const;
    std::string get_order_type() const;
    double get_price() const;
    int get_quantity() const;
};

#endif // ORDER_H