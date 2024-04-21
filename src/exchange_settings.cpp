#include "../Include/exchange_settings.h"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
// #include "json.hpp"

nlohmann::json exchange_settings::exchange_configs_json;

exchange_settings::exchange_settings()
{
    // Read config file
    std::string fileName = "../configs/exchange_config.json";
    std::ifstream exchangeConfigs(fileName);

    if (!exchangeConfigs.is_open())
    {
        throw std::runtime_error("Failed to open config file: " + fileName);
    }

    exchangeConfigs >> exchange_configs_json;

    exchangeConfigs.close();
}

nlohmann::json exchange_settings::get_exchange_configs()
{
    return exchange_configs_json;
}

std::vector<std::string> exchange_settings::get_tradable_universe()
{
    return exchange_configs_json["tradable_universe"];
}