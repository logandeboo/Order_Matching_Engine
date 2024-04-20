#ifndef ExchangeSettings_H
#define ExchangeSettings_H

#include <fstream>
#include <vector>
#include <nlohmann/json.hpp>
class ExchangeSettings
{
private:
    static nlohmann::json exchangeConfigsJson;

public:
    ExchangeSettings();
    nlohmann::json get_exchange_configs();
    std::vector<std::string> get_tradable_universe();

#endif // ExchangeSettings_H
};
