#ifndef Market_Participant_H
#define Market_Participant_H

#include "Order.h"
#include <string>
#include <unordered_map>

class Market_Participant
{

private:
    // Vars
    static std::set<int> pastIds; // records all created ids to ensure uniqueness
    std::string participantId;
    std::unordered_map<std::string, int> holdings;

    // Funcs
    int generate_unique_participant_id();
    int submit_order();
    std::unordered_map<std::string, int> generate_initial_holdings();
    std::vector<std::string> get_tradable_assets();
    Order create_order();

public:
    Market_Participant();
    void update_holdings();
    std::unordered_map<std::string, int> get_holdings();
};

#endif // Market_Participant_H