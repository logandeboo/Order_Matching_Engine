#ifndef MARKET_PARTICIPANT_H
#define MARKET_PARTICIPANT_H

#include "order.h"
#include <string>
#include <unordered_map>
#include <vector>

class market_participant
{

private:
    // vars
    static std::set<int> pastIds; // records all created ids to ensure uniqueness
    std::string participantId;
    std::unordered_map<std::string, int> holdings;

    // funcs
    int generate_unique_participant_id();
    int submit_order();
    std::unordered_map<std::string, int> generate_initial_holdings();
    std::vector<std::string> get_tradable_assets();
    order create_order();

public:
    market_participant();
    void update_holdings();
    std::unordered_map<std::string, int> get_holdings();
};

#endif // MARKET_PARTICIPANT_H