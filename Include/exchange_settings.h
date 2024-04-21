#ifndef EXCHANGE_SETTINGS_H
#define EXCHANGE_SETTINGS_H

#include <fstream>
#include <vector>
#include <nlohmann/json.hpp>
class exchange_settings
{
private:
    static nlohmann::json exchange_configs_json;

public:
    exchange_settings();
    nlohmann::json get_exchange_configs();
    std::vector<std::string> get_tradable_universe();

#endif // EXCHANGE_SETTINGS_H
};
