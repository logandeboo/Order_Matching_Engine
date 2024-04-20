#ifndef MarketParticipantH
#define MarketParticipantH

#include "Order.h"
#include <string>
#include <unordered_map>
#include <vector>

class MarketParticipant
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
    MarketParticipant();
    void update_holdings();
    std::unordered_map<std::string, int> get_holdings();
};

#endif // MarketParticipant_H