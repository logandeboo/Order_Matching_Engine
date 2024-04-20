#include "../Include/ExchangeSettings.h"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
// #include "json.hpp"

nlohmann::json ExchangeSettings::exchangeConfigsJson;

ExchangeSettings::ExchangeSettings()
{
    // Read config file
    std::string fileName = "../configs/exchange_config.json";
    std::ifstream exchangeConfigs(fileName);

    if (!exchangeConfigs.is_open())
    {
        throw std::runtime_error("Failed to open config file: " + fileName);
    }

    exchangeConfigs >> exchangeConfigsJson;

    exchangeConfigs.close();
}

nlohmann::json ExchangeSettings::get_exchange_configs()
{
    return exchangeConfigsJson;
}

std::vector<std::string> ExchangeSettings::get_tradable_universe()
{
    return exchangeConfigsJson["tradable_universe"];
}