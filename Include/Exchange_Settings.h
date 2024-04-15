#ifndef Exchange_Settings_H
#define Exchange_Settings_H

#include <fstream>
#include <nlohmann/json.hpp>

class Exchange_Settings
{
private:
    static nlohmann::json exchangeConfigsJson;

public:
    Exchange_Settings();
    nlohmann::json get_exchange_configs();
    std::vector<std::string> get_tradable_universe();

#endif // Exchange_Settings_H
};
