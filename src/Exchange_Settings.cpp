#include "../Include/Exchange_Settings.h"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

nlohmann::json exchangeConfigsJson;

Exchange_Settings::Exchange_Settings()
{
    // Read config file
    std::string fileName = "../Settings/exchange_config.json";
    std::ifstream exchangeConfigs(fileName);

    if (!exchangeConfigs.is_open())
    {
        throw std::runtime_error("Failed to open config file: " + fileName);
    }

    exchangeConfigs >> exchangeConfigsJson;

    exchangeConfigs.close();
}

nlohmann::json get_exchange_configs()
{
    return exchangeConfigsJson;
}

std::vector<std::string> get_tradable_universe()
{
    return exchangeConfigsJson["tradable_universe"];
}